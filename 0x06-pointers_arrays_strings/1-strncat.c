#include "main.h"
#include <stdio.h>

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

/**
  * _strncat - concatenates 2 strings use n bytes from src
  * @dest: destination string
  * @src: source string
  * @n: bytes from src
  * Return: return dest string.
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int lengthDest = _strlen(dest);

	if (_strlen(src) <= n)
	{
		return (_strcat(dest, src));
	}
	while (i < n)
	{
		dest[lengthDest + i] = src[i];
		i++;
	}

	return (dest);
}
