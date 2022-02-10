#include "main.h"

/**
 * print_line - draw a straight line in the terminal.
 * @n: the number of times the character
 *
 * Return: return null.
 **/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(47 + '0');
		}
		_putchar('\n');
	}
}
