#include <stdlib.h>
#include "main.h"

/**
  * _strlen - returns th length of a string
  * @s: string to check
  * Return: return the length
  */
int _strlen(const char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}

/**
  * binary_to_uint - convert a binary number to unsigned int
  * @b: binary number
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int power;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	power = _strlen(b) - 1;
	while (b[i] != '\0')
	{
		if ((b[i] != '0') && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			decimal = decimal + (1 << power);
		}
		i++;
		power--;
	}

	return (decimal);
}
