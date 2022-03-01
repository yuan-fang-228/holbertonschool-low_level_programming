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
  * str_concat - concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: return the string containing s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;
	char *newStr;
	int i, j;

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
	newStr = malloc((length1 + length2 + 1) * sizeof(char));
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
	while (j <= length2)
	{
		newStr[i] = s2[j];
		i++;
		j++;
	}
	return (newStr);
}
