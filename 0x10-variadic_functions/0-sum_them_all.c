#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
  * sum_them_all - sum of all its parameters
  * @n: numbers of parameters
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list vl;

	va_start(vl, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(vl, int);
	}
	va_end(vl);

	return (sum);
}
