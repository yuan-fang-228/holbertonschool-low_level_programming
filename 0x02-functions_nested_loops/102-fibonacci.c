#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: return the result
 */
int main(void)
{
	long f1 = 1, f2 = 2, i, next;

    printf("%d, ", f1);
    for (i = 0; i < 50; i++) {
        printf("%d", f2);
        next = (f1 + f2);
        f1 = f2;
        f2 = next;
        if (i < 49)
        {
            printf(", ");
        }
    }
	return (0);
}
