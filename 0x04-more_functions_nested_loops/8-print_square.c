#include "main.h"

/**
 * print_square - prints a square, followed by a new line..
 * @size: the size of the square
 *
 * Return: return null.
 **/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('0' - 13);
			}
			_putchar('\n');
		}
	}
}
