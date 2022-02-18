#include "main.h"
#include <stdio.h>
/**
  * number_length - check the length of the integer
  * @num: number to check
  * Return: return the number length
  */
int number_length(int num)
{
	int i = 0;

	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

/**
 * _power - calculate the power of a number
 * @p: power number
 * @b: base number
 * Return: return result
 */
int _power(int p, int b)
{
	int i;
	int result = 1;

	for (i = 1; i <= p; i++)
	{
		result = result * b;
	}

	return (result);
}

/**
  * print_positive_number - print an positive integer using putchar
  * @pn: positive number to print
  * Return: return null
  */
void print_positive_number(int pn)
{
	int length = number_length(pn);
	int i = length - 1;
	int number = pn;
	int divider;

	while (i >= 0)
	{
		divider = _power(i, 10);
		_putchar(number / divider + '0');
		number = number % divider;
		i--;
	}
}

/**
  * print_number - print an integer using putchar
  * @n: number to check
  * Return: return null
  */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n > 0)
	{
		print_positive_number(n);
	}
	else
	{
		_putchar('-');
		print_positive_number(-n);
	}
}

