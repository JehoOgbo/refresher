#include "main.h"

int find_sqrt(int n, int x);

/**
 * _sqrt_recursion - finds the square root of a number using recursion
 *
 * @n: the number whose square root is to be found
 *
 * Return: -1 if the number is not a perfect square, square root otherwise
 */
int _sqrt_recursion(int n)
{
	int root;

	root = find_sqrt(n, 1);
	if (root * root > n)
	{
		return (-1);
	}

	return (root);
}

/**
 * find_sqrt - the actual recursive function
 *
 * @n: the number whose square root is to be found
 * @x: the prospective floor root of the number
 *
 * Return: the floor root of the number
 */
int find_sqrt(int n, int x)
{
	if (x * x >= n)
	{
		return (x);
	}

	return (find_sqrt(n, x + 1));
}
