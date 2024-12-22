#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: string to be printed between parameters
 * @n: number of parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	i = 0;
	while (i < (n - 1))
	{
		printf("%s %s", va_arg(ap, char *), separator);
		i++;
	}
	printf("%s\n", va_arg(ap, char *));

	va_end(ap);
}
