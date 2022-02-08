#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print the n times table.
 * @n: n times
 * Return: return null
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					if (j > 0)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					putchar(k + '0');
				}
				else if (k < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((k / 10) + '0');
					putchar((k % 10) + '0');
				}
				else
				{
					putchar(',');
					putchar(' ');
					putchar((k / 100) + '0');
					putchar((k % 100 / 10) + '0');
					putchar((k % 10) + '0');
				}
			}
			putchar('\n');
		}
	}
}
