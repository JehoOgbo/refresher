#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the number of bytes to be allocated
 * Description: if malloc fails, the function should cause normal
 * process termination with a status value of 98
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
	{
		exit(98);
	}

	return (new);
}
