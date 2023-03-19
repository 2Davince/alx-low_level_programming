#include <stdio.h>
/**
 * main - main program that print alphabet lower case
 * description:'printing of alphabet in lower case'
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
