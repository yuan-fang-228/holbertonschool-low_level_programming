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
	int n;

	for (n = '0'; n < '10'; n++)
	{
		putchar("%d", n);
	}
		putchar("\n");
	return (0);
}
