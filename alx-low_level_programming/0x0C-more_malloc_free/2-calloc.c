#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory
 *
 * @nmemb: number of members in the array
 * @size: the size in bytes of each member of the array
 *
 * Return: a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Note: char is used as this is the only way to initialize the array */
	/* initialize the array to zero */
	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = '0';
	}


	return (ptr);
}
