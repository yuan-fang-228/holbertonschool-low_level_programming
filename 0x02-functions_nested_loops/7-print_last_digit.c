#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - computes the absolute value of integer
 * @i: The number to calculate
 *
 * Return: return the value of the last digit
 */
int print_last_digit(int r)
{
	if (r >= 0)
	{
		_putchar((r % 10) + '0');
		return (r % 10);
	}
	else
	{
		_putchar((abs(r) % 10) + '0');
		return ((abs(r) % 10));
	}
}
