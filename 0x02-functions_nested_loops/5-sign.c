#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: The number to check
 *
 * Return: return 1 if greater than 0, return 0 if 0, return -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
}
