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
				printf("%s", separator);
				printf("%c", va_arg(vl, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s", separator);
				printf("%d", va_arg(vl, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s", separator);
				printf("%f", va_arg(vl, double));
				separator = ", ";
				break;
			case 's':
				s = va_arg(vl, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", separator);
				printf("%s", s);
				separator = ", ";
				break;
		}
		j++;
	}
	va_end(vl);
	printf("\n");
}
