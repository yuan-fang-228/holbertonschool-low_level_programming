#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  * @s: pointer to memory area
  * @b: string to fill
  * @n: bytes of memory
  * Return: return the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
