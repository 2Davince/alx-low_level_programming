#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: converted int to string
 */

int _atoi(char *s)

{
int sign = 1, result = 0;

while (*s == ' ' || (*s >= 9 && *s <= 13))
{
s++;
}

if (*s == '-' || *s == '+')
{
sign = (*s++ == '-') ? -1 : 1;
}

while (*s >= '0' && *s <= '9')
{
int digit = *s++ - '0';

if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
{
return (sign == 1);
}

result = result * 10 + digit;
}

return (result *sign);
}


