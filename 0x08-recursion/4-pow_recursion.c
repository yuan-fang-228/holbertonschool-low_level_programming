#include "main.h"

/**
  * _pow_recursion - returns the value of the power of an integer
  * @x: the base
  * @y: the power
  * Return: return the value of the power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
