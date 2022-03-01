#include "main.h"
#include <stdlib.h>

/**
  * create_array - create an array of chars, initialize with specific char
  * @size: size of the array
  * @c: the specific char to initialize the array
  * Return: Return null if size = 0 or fails, otherwise return a pointer.
  */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	if (ar == 0)
	{
		return (ar);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
	}
	return (ar);
}
