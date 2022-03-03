#include "main.h"
#include <stdlib.h>

/**
  * _strlen - returns the length of a string.
  * @s: string to check
  *
  * Return: return the length.
  */
unsigned int _strlen(char *s)
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
  * string_nconcat - concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * @n: bytes of string to concatenate
  * Return: a pointer to a newly allocated space
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1;
	unsigned int length2;
	char *newStr;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	if (n >= length2)
		n = length2;

	newStr = malloc((length1 + n + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		newStr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		newStr[i] = s2[j];
		i++;
		j++;
	}
	newStr[i] = '\0';
	return (newStr);
}
