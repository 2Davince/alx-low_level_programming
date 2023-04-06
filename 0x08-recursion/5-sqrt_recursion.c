/**
 * find_sqrt - Finds the natural square root of a number
 *
 * @n: The number to find the square root of
 * @start: The starting point to search for the square root
 * @end: The ending point to search for the square root
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root
 */
int find_sqrt(int n, int start, int end);

/**
 * _sqrt_recursion - Finds the natural square root of a number using
 *                   recursion
 *
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - Finds the natural square root of a number
 *
 * @n: The number to find the square root of
 * @start: The starting point to search for the square root
 * @end: The ending point to search for the square root
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root
 */
int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);

	if (start >= end)
		return (-1);

	if (mid * mid < n)
		return (find_sqrt(n, mid + 1, end));
	else
		return (find_sqrt(n, start, mid - 1));
}

