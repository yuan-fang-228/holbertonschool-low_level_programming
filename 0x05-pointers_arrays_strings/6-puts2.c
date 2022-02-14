#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * puts2 - print every other character of a string
  * @str: string to print
  *
  * Return: return null
  */
void puts2(char *str)
{
	int i = 0;
	int length = strlen(str);

	while (i >= 0 && i < length)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
