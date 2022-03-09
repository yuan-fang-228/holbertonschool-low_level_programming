#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - print out each element of the array
  * @array: array
  * @size: array size
  * @action: a pointer to function of printing out the integer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
