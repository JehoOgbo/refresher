#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 *
 * @s: pointer to the string to be printed in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *hold;

	if (!(*s))
	{
		return;
	}

	s++;
	hold = s;
	s--;
	_print_rev_recursion(hold);
	
	_putchar(*s);
}
