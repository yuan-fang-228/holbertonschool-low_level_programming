#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: number to start
 *
 * Return: return null
 */

void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	if (i == 98)
	{
		printf("%d", i);
	}
	printf("\n");
}
