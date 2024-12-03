#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints a single character at a time
 *
 * @c: character to be printed
 * Return: void
 */
int _putchar(char c)
{
	if (!c)
		return (EOF);
	putc(c, stdout);
	return (c);
}
