#include "main.h"

/**
  * swap_int - swap the values of two integers
  * @a: integer pointer a
  * @b: integer poitner b
  *
  * Return: return null.
  */
void swap_int(int *a, int *b)
{
	int aa;

	aa = *a;
	*a = *b;
	*b = aa;
	
}
