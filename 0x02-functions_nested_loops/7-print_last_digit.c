#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - computes the absolute value of integer
 * @i: The number to calculate
 *
 * Return: return the value of the last digit
 */
int print_last_digit(int i)
{
	if (i >= 0)
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
	else
	{
		_putchar(abs(i % 10) + '0');
		return (abs(i % 10));
	}
}
