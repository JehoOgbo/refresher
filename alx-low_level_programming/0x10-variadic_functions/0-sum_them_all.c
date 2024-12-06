#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all it's parameters
 *
 * @n: the number of parameters to be passed
 *
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	result = 0;

	i = 0;
	while (i < n)
	{
		result += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (result);
}
