#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string to count its length
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
