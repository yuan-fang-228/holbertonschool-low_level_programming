#include "main.h"

/**
  * factorial - calculate the factorial of a given number
  * @n: given number
  * Return: return the factorial
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
