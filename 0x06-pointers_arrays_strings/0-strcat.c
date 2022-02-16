#include "main.h"

/**
  * _strlen - returns th length of a string
  * @s: string to check
  * Return: return the length
  */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}

/**
  * _strcat - appends the src string to the dest string
  * @dest: destination string
  * @src: source string
  * Return: return the dest string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int length = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}

	return (dest);
}
