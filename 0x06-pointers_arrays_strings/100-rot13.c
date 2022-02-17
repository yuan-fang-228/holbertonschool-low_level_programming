#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @str: string to be encoded
  * Return: return the encoded string
  */
char *rot13(char *str)
{
	char *alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int indexStr = 0;
	int indexAl = 0;

	while (str[indexStr] != '\0')
	{
		indexAl = 0;
		while (alph[indexAl] != '\0')
		{
			if (str[indexStr] == alph[indexAl])
			{
				str[indexStr] = rot[indexAl];
				break;
			}
			indexAl++;
		}
		indexStr++;
	}
	return (str);
}
