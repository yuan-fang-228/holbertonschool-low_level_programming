#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Return: 1 for lowercase, otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
