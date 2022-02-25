#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * isadigit - check if it is digit
  * @c: the string to check
  * Return: return 1 if digit, otherwise return 0
  */
int isadigit(char *c)
{
	while (*c != '\0')
	{
		if (*c >= '0' && *c <= '9')
			c++;
		else
			return (0);
	}
	return (1);
}

/**
  * main - adds positive numbers
  * @argc: the number of the command line arguments
  * @argv: the array of the command line arguments
  * Return: return 1 if not digits, otherwise return 0
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isadigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
