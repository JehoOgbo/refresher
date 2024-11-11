#include <stdio.h>

/**
 * _putchar - prints a single character
 * Description: works exactly like putchar and makes
 * a call to putc. See man putchar for more info.
 *
 * @c: character to be printed
 * Return: numerical value of character
 */
int _putchar(char c)
{
	putc(c, stdout);

	return (c);
}
