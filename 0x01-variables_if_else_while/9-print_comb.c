#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing all possible combination of single digit numbers
 * Return: (0)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
