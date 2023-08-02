#include "main.h"

/**
 * is_prime_helper - helps to check for prime number
 * @n: int
 * @i: int
 * Return: returns 1 if the input integer is
 * a prime number, otherwise return 0.
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: int to check
 * Return: returns 1 if the input integer is
 * a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (is_prime_helper(n, 2));
}
