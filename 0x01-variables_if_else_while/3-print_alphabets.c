#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - use putchar to print all the lowercase and uppercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	} 
		putchar('\n');
	return (0);
}