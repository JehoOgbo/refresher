#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 *
 * @s: pointer to a pointer whose value is to be set
 * @to: pointer to character whose value we set another to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
