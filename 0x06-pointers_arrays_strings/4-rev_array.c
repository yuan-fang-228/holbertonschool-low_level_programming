#include "main.h"
#include <stdio.h>
/**
  * reverse_array - reverse the content of an integer array
  * @a: pointer to the array
  * @n: number of elements of the array
  * Return: return null
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int indexArray = n - 1;
	int tmpInt;

	while (i < n / 2)
	{
		tmpInt = *(a + i);
		*(a + i) = *(a + indexArray);
		*(a + indexArray) = tmpInt;
		i++;
		indexArray--;
	}
}
