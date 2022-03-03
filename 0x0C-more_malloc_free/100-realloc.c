#include "main.h"
#include <stdlib.h>

/**
  * getMin - get the minimum number
  * @num1: number 1
  * @num2: number 2
  * Return: minimum number
  */
int getMin(int num1, int num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}

/**
  * _realloc - realloc a memory block using malloc and free
  * @ptr: the pointer to memory previously allocated
  * @old_size: old size
  * @new_size: new size to be reallocated.
  * Return: a pointer to the new memory address.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	int minSize, i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		else
			return (newPtr);
	}
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	minSize = getMin(old_size, new_size);
	for (i = 0; i < minSize; i++)
	{
		*((char *)newPtr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (newPtr);
}
