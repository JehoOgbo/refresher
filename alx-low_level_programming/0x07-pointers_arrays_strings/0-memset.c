#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * Description: The _memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @s: pointer to the memory area to be filled
 * @b: constant byte with which memory is to be filled
 * @n: number of bytes of memory to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
