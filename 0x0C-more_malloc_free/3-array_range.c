#include "main.h"
#include <stdlib.h>

/**
  * array_range - create array of integers from min to max
  * @min: minimal number
  * @max: max number
  * Return: a pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int i = 0;
	int *newArray;
	int numbers = max - min + 1;

	if (min > max)
		return (NULL);
	 newArray = malloc(numbers * sizeof(*newArray));
	if (newArray == NULL)
		return (NULL);
	while (i < numbers)
	{
		newArray[i] = min;
		min++;
		i++;
	}

	return (newArray);
}
