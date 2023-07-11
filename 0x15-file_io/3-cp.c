#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print error message to stderr.
 * @msg: Error message to print.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
}

/**
 * exit_error - Print error message and exit with the specified code.
 * @code: Exit code.
 * @msg: Error message to print.
 */
void exit_error(int code, const char *msg)
{
	print_error(msg);
	exit(code);
}

/**
 * cp - Copy content from file_from to file_to.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 */
void cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit_error(98, "Error: Can't read from file");

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (fd_to == -1)
		exit_error(99, "Error: Can't write to file");

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			exit_error(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		exit_error(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		exit_error(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		exit_error(100, "Error: Can't close fd");
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, or the appropriate exit code.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}

	cp(argv[1], argv[2]);

	return (0);
}

