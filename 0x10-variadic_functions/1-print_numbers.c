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
		if (i == 0)
		{
			printf("%d", va_arg(vl, unsigned int));
		}
		else
		{
			printf("%s%d", separator, va_arg(vl, unsigned int));
		}
	}
	printf("\n");

	va_end(vl);
}
