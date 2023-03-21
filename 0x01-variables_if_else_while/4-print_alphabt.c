#include <stdio.h>
/**
 * main - Entry point
 *
 * description: program that prints all alphabetical orders except e and q
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
		while (n <= 122)
		{
			if (n == 101 || n == 113)
			{
				n++;
				continue;
			}
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}
