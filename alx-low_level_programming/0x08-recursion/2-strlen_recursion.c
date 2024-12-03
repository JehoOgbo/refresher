#include "main.h"

/**
 * _strlen_recursion - find the length of a string using recursion
 *
 * @s: string whose length is to be found
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return (0);
	}

	s++;

	return(1 + _strlen_recursion(s));
}
