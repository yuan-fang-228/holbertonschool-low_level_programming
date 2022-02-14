#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * puts_half - print second half of the character
  * @str: string to print
  *
  * Return: return null
  */
void puts_half(char *str)
{
	int i = 0;
	int length = strlen(str);

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2 ; i <= length; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
