#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees the dogs
  * @d: a pointer that pointed to dog_t type
  * Return: null
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if ((*d).name != NULL)
		free((*d).name);
	if ((*d).owner != NULL)
		free((*d).owner);
	free(d);
}
