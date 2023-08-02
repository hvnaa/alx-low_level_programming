#include "main.h"

/**
 * _sqrt1 - a func to check for square root
 * @n: int
 * @i: int
 * Return: square root for n
 */
int _sqrt1(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt1(n, i + 1));
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: int
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt1(n, 0));
}
