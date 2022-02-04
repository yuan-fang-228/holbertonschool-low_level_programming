#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - use putchar to prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int h = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}

	putchar('\n');
	return (0);
}

