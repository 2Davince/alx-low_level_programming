#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text_content to the end of a file.
 * @filename: Name of the file.
 * @text_content: Text content to append (NULL terminated string).
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	bytes_written = write(fd, text_content, len);
	if (bytes_written != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

