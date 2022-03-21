#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: return the result
 */
int main(void)
{
	long num1 = 1;
	long num2 = 2;
	long num3, i;

	printf("%ld, ", num1);
	printf("%ld", num2);
	for (i = 0; i < 48; i++)
	{
		num3 = num1 + num2;
		printf(", %ld", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("\n");

	return (0);
}
