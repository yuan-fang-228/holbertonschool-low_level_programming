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
	void *pointer;
	int *tmpPointer;
	unsigned int i = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	tmpPointer = pointer;
	while (i < nmemb * size)
	{
		tmpPointer[i] = 0;
		i++;
	}
	pointer = tmpPointer;

	return (pointer);
}
