#include "main.h"
#define NULL 0

/**
  * _strchr - locate a character in a string
  * @s: pointer to a string
  * @c: character to be located in the string
  * Return: return the address of the character if yes, otherwise return null.
  */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0' && s[count] != c)
	{
		count++;
		if (s[count] == c)
		{
			return (&s[count]);
		}
	}
	return (NULL);
}
