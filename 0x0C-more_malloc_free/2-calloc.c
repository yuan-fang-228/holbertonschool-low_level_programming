#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocate memory of an array
  * @nmemb: elements amount of the array
  * @size: bytes
  * Return: a pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned i = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		pointer[i] = 0;
		i++;
	}

	return (pointer);
}
