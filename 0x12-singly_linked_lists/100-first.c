#include <stdio.h>

void myStartFun(void) __attribute__ ((constructor));

/**
 * myStartFun - function that executes before main function
 */
void myStartFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
