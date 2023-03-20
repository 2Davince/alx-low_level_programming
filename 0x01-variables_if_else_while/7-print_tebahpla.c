#include <stdio.h>
/**
 * Main - Entry point for printing of lowercase alphabets in reverse order
 * return 0 (success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
