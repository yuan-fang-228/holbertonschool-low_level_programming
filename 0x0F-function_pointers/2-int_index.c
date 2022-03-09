#include "function_pointers.h"

/**
  * int_index - search for an integer
  * @array: an array
  * @size: array size
  * @cmp: a pointer to functions that compare the values
  * Return: an integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
