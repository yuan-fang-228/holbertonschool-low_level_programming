#include "main.h"
#define NULL 0

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
  * _strchr - locate a character in a string
  * @s: pointer to a string
  * @c: character to be located in the string
  * Return: return the address of the character if yes, otherwise return null.
  */
char *_strchr(char *s, char c)
{
	int count;
	int length = _strlen(s);

	for (count = 0; count < length; count++)
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
	}
	return (NULL);
}
