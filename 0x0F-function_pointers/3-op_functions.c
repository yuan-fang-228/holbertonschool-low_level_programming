#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - return the sum of a and b
  * @a: integer a
  * @b: integer b
  * Return: the sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference between a and b
 * @a: integer a
 * @b: integer b
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 * @a: integer a
 * @b: integer b
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - return the result of a/b
  * @a: integer a
  * @b: integer b
  * Return: a / b
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
  * op_mod - return the remainder of the division of a/b
  * @a: integer a
  * @b: integer b
  * Return: the remainder of a/b
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
