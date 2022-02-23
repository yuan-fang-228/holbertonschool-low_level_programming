# include "main.h"

/**
  * rootSearch - search for root
  * @root: root
  * @n: number to compute for root
  * Return: return root
  */
int rootSearch(int root, int n)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	else
	{
		return (rootSearch((root + 1), n));
	}
}

/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: a number to check the natural square root
  * Return: return the natural square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (rootSearch(0, n));
	}
}
