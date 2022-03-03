#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocate memory using malloc
  * @b: allocated memory spaces
  * Return: return a pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}
