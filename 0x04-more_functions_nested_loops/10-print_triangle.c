#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: return null.
 **/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i + j < size - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' - 13);
				}
			}
			_putchar('\n');
		}
	}
}
