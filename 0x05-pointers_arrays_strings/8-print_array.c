#include "main.h"
#include <stdio.h>
/**
  * print_array - print n elements of an array
  * @a: array to print
  * @n: the element to print
  * Return: return null.
  */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
}
