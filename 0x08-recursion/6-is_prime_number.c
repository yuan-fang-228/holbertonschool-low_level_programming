#include "main.h"

/**
  * checkPrime - check for prime number
  * @i: number from 0 for iterative
  * @n: input number
  * Return: return 1 if yes, otherwise return 0
  */
int checkPrime(int i, int n)
{
	if (n % i == 0 && i != n)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	else
	{
		return (checkPrime((i + 1), n));
	}

}

/**
  * is_prime_number - check if the input number is a prime number
  * @n: input number to check
  * Return: return 1 if yes, otherwise return 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (checkPrime(2, n));
	}

}
