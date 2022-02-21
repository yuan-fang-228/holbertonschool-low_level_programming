#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string to be searched
  * @needle: the string to be found
  * Return: return the substring, NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	int indexHaystack = 0;
	int indexHaystackLoop;
	int indexNeedle = 0;

	if (needle[indexNeedle] == '\0')
	{
		return (haystack);
	}
	while (haystack[indexHaystack] != '\0')
	{
		if (haystack[indexHaystack] == needle[0])
		{
			indexHaystackLoop = indexHaystack;
			indexNeedle = 0;
			while (needle[indexNeedle] != '\0')
			{
				if (haystack[indexHaystackLoop] == needle[indexNeedle])
				{
					indexHaystackLoop++;
					indexNeedle++;
				}
				else
				{
					break;
				}
			}
			if (needle[indexNeedle] == '\0')
			{
				return (haystack + indexHaystack);
			}
		}
		indexHaystack++;
	}
	return (0);
}
