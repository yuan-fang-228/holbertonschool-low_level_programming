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
    char *separator = "";
    int i, j = 0;
    va_list vl;

    char *formats = "cifs";

    va_start(vl, format);
    while (format != NULL && format[j] != '\0')
    {
        i = 0;
        while (formats[i] != '\0')
        {
            if (formats[i] == format[j])
            {
                char *s;
                printf("%s", separator);
                switch (format[j])
                {
                    case 'c':
                        printf("%c", va_arg(vl, int));
                        break;
                    case 'i':
                        printf("%d", va_arg(vl, int));
                        break;
                    case 'f':
                        printf("%f", va_arg(vl, double));
                        break;
                    case 's':
                        s = va_arg(vl, char *);
                        if (s == NULL)
							s = "(nil)";
                        printf("%s", s);
                        break;
                    default:
                        break;
                }
                separator = ", ";
            }
            i++;
        }
        j++;
    }
    va_end(vl);
    printf("\n");
}
