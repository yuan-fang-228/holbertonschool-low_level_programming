#include "main.h"

/**
  * clear_bit - set the value of a bit to 0 at given index
  * @n: pointer to the number
  * @index: index
  * Return: 1 if worked, -1 if failed
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
