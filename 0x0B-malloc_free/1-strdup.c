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
	int i;
	int length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = i;
	}

	if (length > 0)
	{
		length++;
	}

	return (length);
}

/**
  * _strdup - return a pointer to the new allocated memory address
  * @str: given string
  * Return: return the pointer to new string address
  */
char *_strdup(char *str)
{
	int length;
	int i;
	char *dupStr;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str);
	dupStr = malloc((length + 1) * sizeof(char));
	if (dupStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		dupStr[i] = str[i];
	}
	return (dupStr);

}
