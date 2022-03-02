#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - print the minimum number of coins
  * @argc: the number of the command line arguments
  * @argv: the array of the command line arguments
  * Return: return 1 if error
  */

int main(int argc, char *argv[])
{
	int change, i;
	int coins[5] = {25, 10, 5, 2, 1};
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		if (change / coins[i] > 0)
			count = count + change / coins[i];
		if (change % coins[i] == 0)
		{
			break;
		}
		else
		{
			change = change % coins[i];
		}
	}
	printf("%d\n", count);

	return (0);
}
