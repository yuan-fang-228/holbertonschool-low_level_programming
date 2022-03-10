#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - prints all the strings
  * @separator: separator
  * @n: number of parameters
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	char *str;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else if (i == 0 || separator == NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");

	va_end(vl);
}
