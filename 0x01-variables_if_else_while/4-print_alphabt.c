#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - use putchar to print all the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}


