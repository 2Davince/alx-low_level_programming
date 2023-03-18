#include <stdio.h>
/**
 * main: Entry point for printing alphabet in lower case 
 * documentation: 'printing of alphabet in lower case'
 * return: (0) success
 */
int  main(void)
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
