#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - calculates the sum of a and b
  * @a: int to add
  * @b: int to add
  *
  * Return: returns the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - calculates the difference of a and b
  * @a: int to sub
  * @b: int to sub
  *
  * Return: returns the difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - calculates the product of a and b
  * @a: int to multiply
  * @b: int to multiply
  *
  * Return: returns the product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - calculates the division of a and b
  * @a: int to devide
  * @b: int to devide
  *
  * Return: returns the result of the division of a by b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - returns the remainder of the division of a by b
  * @a: int
  * @b: int
  *
  * Return: returns the remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
