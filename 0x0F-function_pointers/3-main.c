#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * main - print the results of two integers that are input by user
  * @argc: the amount of input arguments
  * @argv: all the arguments as an array
  * Return: return 0
  */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(a, b));

	return (0);
}
