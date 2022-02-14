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
	int i;
	int length = strlen(src);

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
