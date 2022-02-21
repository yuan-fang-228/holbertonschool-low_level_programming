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
	int index = 0;

	while (s[index] != '\0' && s[count] != c)
	{
		index++;
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	return (NULL);
}
