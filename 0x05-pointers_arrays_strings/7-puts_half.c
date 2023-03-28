#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int i;
	int n;
	int longi;
longi = 0;

while (str[longi] != '\0')
longi++;

if (longi % 2 == 0)
n = longi / 2;
else
n = (longi + 1) / 2;

for (i = n; i < longi; i++)
_putchar(str[i]);

_putchar('\n');
}

