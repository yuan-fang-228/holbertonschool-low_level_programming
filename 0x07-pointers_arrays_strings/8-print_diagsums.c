#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - print sum of two diagonals of a square matrix of integers
  * @a: pointer to array
  * @size: size of the matrix
  * Return: return null
  */
void print_diagsums(int *a, int size)
{
	int row;
	int sum1 = 0;
	int sum2 = 0;

	for (row = 0; row < size; row++)
	{
		sum1 = sum1 + a[row * size + row];
		sum2 = sum2 + a[(row + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
