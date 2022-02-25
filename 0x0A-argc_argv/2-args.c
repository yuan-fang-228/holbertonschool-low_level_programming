#include "main.h"
#include <stdio.h>

/**
  * main - print all arguments it receives
  * @argc: the number of the command line arguments
  * @argv: the array of the command line arguments
  * Return: return 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
