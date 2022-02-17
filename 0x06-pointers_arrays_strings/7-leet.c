#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: string to be encoded
 * Return: return the encoded string
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	int indexStr = 0;
	int indexLt = 0;

	while (str[indexStr] != '\0')
	{
		indexLt = 0;
		while (letters[indexLt] != '\0')
		{
			if (str[indexStr] == letters[indexLt])
			{
				str[indexStr] = numbers[indexLt];
			}
			indexLt++;
		}
		indexStr++;
	}
	return (str);
}
