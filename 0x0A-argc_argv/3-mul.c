#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: the number of the command line arguments
  * @argv: the array of the command line arguments
  * Return: return 0 if ok, return 1 if there is an error
  */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
