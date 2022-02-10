#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character
 *
 * Return: return null.
 **/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 0; i < j - 1; i++)
			{
				_putchar(' ');
			}
			_putchar(44 + '0');
			_putchar('\n');
		}
	}
}
