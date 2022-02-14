#include "main.h"
#include <string.h>
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
