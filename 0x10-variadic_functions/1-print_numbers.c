#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - print all the numbers followed by a newline
  * @separator: it sits between the numbers
  * @n: numbers of parameters
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;

	va_start(vl, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(vl, int));
		}
		else
		{
			printf("%d%s", va_arg(vl, int), separator);
		}
	}
	printf("\n");

	va_end(vl);
}
