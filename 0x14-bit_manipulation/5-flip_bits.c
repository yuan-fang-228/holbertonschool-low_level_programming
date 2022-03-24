#include "main.h"

/**
  * flip_bits - number of bits to flip to convert n to m
  * @n: number 1
  * @m: number 2
  * Return: number of bits need to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int count = 0;

	difference = n ^ m;
	while (difference > 0)
	{
		if (difference & 1)
			count++;
		difference = difference >> 1;
	}

	return (count);
}
