#include "main.h"
#include <ctype.h>
/**
  * _isupper - checks for uppercase character.
  * @c: the letter to check
  *
  * Return: 1 if c is uppercase, otherwise return 0.
  */
int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
