#include "main.h"

/**
  * _isseparator - check for separators
  * @ch: character to check
  *
  * Return: return 1 for yes, return 0 for no
  */
int _isseparator(char ch)
{
	if (ch == ' ' ||
	ch == '\t' || ch == '\n' ||
	ch == ',' || ch == ';' ||
	ch == '.' || ch == '!' ||
	ch == '?' || ch == '"' ||
	ch == '(' || ch == ')' ||
	ch == '{' || ch == '}')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
  * cap_string - capitalizes all words of a string
  * @str: string to be capitalized
  * Return: return the string with all capitalized words
  */
char *cap_string(char *str)
{
	int i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (_isseparator(str[i - 1]) == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
