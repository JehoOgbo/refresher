#include "main.h"

int find_prime(int n, int x);

/**
 * is_prime_number - checks if a number is prime recursively
 *
 * @n: number which is to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return(find_prime(n, 2));
}

/**
 * find_prime - checks if a num is prime
 * 
 * @n: number to be checked
 * @x: counter which only gets to the floor prime
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int find_prime(int n, int x)
{
	/* uses the fact that a number is prime if it is divisible */
	/* by no number from 1 to the floor root */

	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		return (0);
	}

	if (n % x == 0)
	{
		return (0);
	}

	if (x * x >= n)
	{
		return (1);
	}

	return (find_prime(n, x + 1));
}
