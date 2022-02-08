#include "main.h"
#include <stdio.h>
/**
 * times_table - print the 9 times table.
 *
 * Return: return null
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n < 10)
			{
				if (j > 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				putchar(n + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
			}
			if (j == 9)
			{
				putchar('\n');
			}
		}
	}
}
