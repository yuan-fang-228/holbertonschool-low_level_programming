#include "main.h"

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

	if (length > 0) {
		length++;
	}

 	return (length);
 }
