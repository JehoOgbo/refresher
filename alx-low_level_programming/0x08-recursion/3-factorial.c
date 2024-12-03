#include "main.h"

/**
 * factorial - return the factorial of a given number
 *
 * @n: the number whose factorial is to be found
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	/* show error for n < 1 */
	if (n < 1)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
