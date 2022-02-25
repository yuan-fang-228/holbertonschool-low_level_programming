#include "main.h"
#include <stdio.h>

/**
  * main - print its name fowllowed by a new line
  * @argc: the numbers of command line arguments
  * @argv: the array containing the command line arguments
  * Return: return null
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
