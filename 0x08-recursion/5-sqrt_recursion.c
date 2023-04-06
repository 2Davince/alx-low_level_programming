#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to compute the square root of.
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion(n, 1, n));
}

/**
 * _sqrt_recursion_helper - helper function to compute the natural square root
 * of a number.
 * @n: the number to compute the square root of.
 * @start: the start index to search for the square root.
 * @end: the end index to search for the square root.
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid = 0;

	if (start <= end)
	{
		mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);
		else if (mid * mid > n)
			return (_sqrt_recursion_helper(n, start, mid - 1));
		else
			return (_sqrt_recursion_helper(n, mid + 1, end));
	}

	return (-1);
}
