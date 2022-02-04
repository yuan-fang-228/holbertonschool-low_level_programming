#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all single digit;
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
