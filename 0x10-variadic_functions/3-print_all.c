#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints any type of argument
 * @format: The format string for the arguments
 * @...: The arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				j = 1;
				break;
		}
		if (j == 0 && separator != NULL)
			separator = ", ";
		i++;
	}
	va_end(args);

	printf("\n");
}

