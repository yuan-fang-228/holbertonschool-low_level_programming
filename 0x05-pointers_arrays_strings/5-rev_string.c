#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * rev_string - reverse a string
  * @s: string to be reversed
  *
  * Return: return null
  */
void rev_string(char *s)
{
	int strlength = strlen(s);
	int headStr = 0;
	int tailStr = strlength - 1;
	int i;
	char tmpString;

	for (i = headStr; i < tailStr; i++)
	{
		tmpString = s[i];
		s[i] = s[tailStr];
		s[tailStr] = tmpString;
		tailStr--;
	}
}
