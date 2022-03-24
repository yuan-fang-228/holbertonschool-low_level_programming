#include "main.h"

/**
  * set_bit - set the value of a bit to 1 at a given index
  * @n: pointer to the number
  * @index: index
  * Return: 1 if worked, -1 if an error happened
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}