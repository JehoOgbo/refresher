#include "function_pointers.h"

/**
 * print_name - prints the content of variable name
 *
 * @name: variable (string) to be printed
 * @f: function pointer to the actual printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
