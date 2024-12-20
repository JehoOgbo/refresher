#include "main.h"

/**
 * _memcpy - copies a memory area into another
 *
 * @dest: region to which information is to be copied
 * @src: source of the information
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
