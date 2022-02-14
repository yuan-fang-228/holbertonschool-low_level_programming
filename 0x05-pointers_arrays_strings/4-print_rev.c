#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * print_rev - print a string in reverse
  * @s: string to put
  *
  * Return: return null
  */
void print_rev(char *s)
{
	int i;
	int strlength = strlen(s);

	for (i = (strlength - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
