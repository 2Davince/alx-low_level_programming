#include <stdio.h>
/**
 * main - Entry point
 *
 * description: printing lower case alphabets 
 * return: 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

return (0);
}
