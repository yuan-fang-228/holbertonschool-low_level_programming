#include "main.h"

/**
  * _strlen_recursion - return the length of the string
  * @s: string to check length
  * Return: return the length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
  * checkPalindrome - check if a string is palindrome
  * @s: string to check
  * @start: start index
  * @end: end index
  * Return: return 1 if yes, otherwise return 0
  */
int checkPalindrome(char *s, int start, int end)
{
	if (start == end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else if (start < end)
	{
		return (checkPalindrome(s, start + 1, end - 1));
	}
	else
	{
		return (1);
	}
}

/**
  * is_palindrome - check if a string is a palindrome
  * @s: a pointer to a string to check
  * Return: return 1 if yes, otherwise return 0
  */
int is_palindrome(char *s)
{
	int start = 0;
	int end = _strlen_recursion(s) - 1;

	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (checkPalindrome(s, start, end));
	}

}
