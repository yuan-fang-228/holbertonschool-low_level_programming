#include "main.h"

/**
  * get_bit - return the value of a bit at a given index
  * @n: number to check
  * @index: index
  * Return: the bit at the given index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
