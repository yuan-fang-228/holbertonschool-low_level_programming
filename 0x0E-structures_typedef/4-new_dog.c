#include "dog.h"
#include <stdlib.h>

/**
  * _strcpy - copy one string pointer to another pointer
  * @dest: destination string
  * @src: source string
  * Return: return the destination string
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
  * new_dog - a function that creates a new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *copyName;
	char *copyOwner;

	newDog = malloc(sizeof(*newDog));
	if (newDog == NULL)
		return (NULL);
	if (name != NULL)
	{
		copyName = malloc(sizeof(*copyName));
		if (copyName == NULL)
		{
			free(newDog);
			return (NULL);
		}
		(*newDog).name = _strcpy(copyName, name);
	}
	else
		(*newDog).name = NULL;
	(*newDog).age = age;
	if (owner != NULL)
	{
		copyOwner = malloc(sizeof(*copyOwner));
		if (copyOwner == NULL)
		{
			free(copyName);
			free(newDog);
			return (NULL);
		}
		(*newDog).owner = _strcpy(copyOwner, owner);
	}
	else
		(*newDog).owner = NULL;

	return (newDog);
}
