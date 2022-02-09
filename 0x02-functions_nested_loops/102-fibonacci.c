#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: return the result
 */
int main(void)
{
	int f1 = 0, f2 = 1, i, next;

    printf("%d ", f1);
    for (i = 1; i < 50; i++) {
        printf("%d ", f2);
        next = (f1 + f2);
        f1 = f2;
        f2 = next;
    }
	return (0);
}
