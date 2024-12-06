#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a separator
 *
 * @separator: string to be printed between the parameters
 * @n: number of parameters to be used
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_ptr;

	va_start(arg_ptr, n);

	i = 0;

	while (i < (n - 1))
	{
		printf("%d %s", va_arg(arg_ptr, int), separator);
		i++;
	}

	printf("%d\n", va_arg(arg_ptr, int));

	va_end(arg_ptr);
}
