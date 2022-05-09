#include "main.h"

/**
  * _strncpy - copy the string, if n is greater than src, fill with '\0'
  * @dest: destination string
  * @src: string to copy
  * @n: n bytes to copy
  * Return: return dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
