#include "main.h"
#include <stdlib.h>

/**
  * _strlen - returns the length of a string.
  * @s: string to check
  *
  * Return: return the length.
  */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		i++;
		length++;
	}

	return (length);
}

/**
  * argstostr - concatenates all the arguments
  * @ac: amount of the arguments
  * @av: arguments
  * Return: a pointer to the string
  */
char *argstostr(int ac, char **av)
{
	int index = 0;
	int i, j;
	int length = 0;
	char *newStr;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length = length + _strlen(av[i]);
	}
	length = length + ac + 1;
	newStr = malloc(length * sizeof(newStr[0]));
	if (newStr == NULL)
	{
		free(newStr);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			newStr[index] = av[i][j];
			index++;
		}
		newStr[index] = '\n';
		index++;
	}

	return (newStr);
}
