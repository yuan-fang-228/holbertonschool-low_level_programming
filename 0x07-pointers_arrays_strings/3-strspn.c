#include "main.h"

/**
  * _strspn - get the length of a prefix substring
  * @s: pointer to a inital string
  * @accept: string to compare with initial string
  * Return: return the number of bytes in the inital string from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	int indexS = 0;
	int indexAccept = 0;
	unsigned int count = 0;

	while (s[indexS] != '\0')
	{
		indexAccept = 0;
		while (accept[indexAccept] != '\0')
		{
			if (s[indexS] == accept[indexAccept])
			{
				count++;
				break;
			}
			indexAccept++;
			if (accept[indexAccept] == '\0')
			{
				return (count);
			}
		}
		indexS++;
	}
	return (count);
}
