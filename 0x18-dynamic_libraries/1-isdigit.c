#include "main.h"
#include <ctype.h>

/**
  * _isdigit - check for a digit from 0 to 9
  * @c: digit to check
  *
  * Return: 1 if is digit, otherwise 0
  */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
