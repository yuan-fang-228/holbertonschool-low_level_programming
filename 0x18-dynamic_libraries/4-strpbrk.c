#include "main.h"
#define NULL 0

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: original string to check
  * @accept: string to be found in original string
  * Return: return the matches string in accept, or null if no match
  */
char *_strpbrk(char *s, char *accept)
{
	int indexS = 0;
	int indexAccept = 0;

	while (s[indexS] != '\0')
	{
		indexAccept = 0;
		while (accept[indexAccept] != '\0')
		{
			if (s[indexS] == accept[indexAccept])
			{
				s = &s[indexS];
				return (s);
			}
			indexAccept++;
		}
		indexS++;
	}
	return (NULL);
}
