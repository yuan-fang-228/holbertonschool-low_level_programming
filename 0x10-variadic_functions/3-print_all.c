#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * print_all - print anything
  * @format: type of arguments
  * Return: void
  */
void print_all(const char * const format, ...)
{
	char *separator = "", *s;
	int j = 0;
	va_list vl;

	va_start(vl, format);
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator, va_arg(vl, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(vl, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(vl, double));
				separator = ", ";
				break;
			case 's':
				s = va_arg(vl, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				separator = ", ";
				break;
		}
		j++;
	}
	va_end(vl);
	printf("\n");
}
