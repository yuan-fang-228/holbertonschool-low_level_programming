#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - use if else to check the postive and negative of the random nunber
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positve\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
