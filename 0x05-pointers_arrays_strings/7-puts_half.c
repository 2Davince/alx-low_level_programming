#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int i;
	int n;
	int leni;
int leni = 0;

while (str[leni] != '\0')
leni++;

if (leni % 2 == 0)
n = leni / 2;
else
n = (leni + 1) / 2;

for (i = n; i < leni; i++)
_putchar(str[i]);

_putchar('\n');
}

