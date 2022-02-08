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
	if(i >= 0)
	{
		return(_putchar((i % 10) + '0'));
	}
	else
	{
		return(_putchar((abs(i) % 10) + '0'));
	}
}
