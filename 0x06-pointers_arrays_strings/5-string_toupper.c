#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @l: letters to check
  *
  * Return: return the letters with all uppercase
  */
char *string_toupper(char *l)
{
	int i = 0;

	while (l[i] != '\0')
	{
		if (l[i] >= 'a' && l[i] <= 'z')
		{
			l[i] = l[i] - 32;
		}
		i++;
	}

	return (l);
}
