#include "main.h"
#include <stdio.h>

/**
  * main - print the number of arguments passed into it
  * @argc: the number of the command line arguments
  * @argv: the array of the command line arguments
  * Return: return 0
  */
int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] != 0)
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
