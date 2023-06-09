#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point. Calculates two integers.
 * @argc: The number of arguments.
 * @argv: The arguments vector.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
	printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
	printf("Error\n");
	return (100);
	}

	result = get_op_func(op)(num1, num2);

	printf("%d\n", result);

	return (0);
}

