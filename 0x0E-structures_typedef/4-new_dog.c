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
  * _strlen - returns the length of a string.
  * @s: string to check
  *
  * Return: return the length.
  */
int _strlen(char *s)
{
	int i;
	int length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = i;
	}

	if (length > 0)
	{
		length++;
	}

	return (length);
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
		copyName = malloc(_strlen(name) + 1);
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
		copyOwner = malloc(_strlen(owner) + 1);
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
