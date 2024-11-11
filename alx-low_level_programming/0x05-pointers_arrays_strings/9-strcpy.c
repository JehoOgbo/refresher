#include "main.h"

/**
 * _strcpy - copies a string pointed to by src to the buffer dest
 *
 * @src: the source of the string or string to be copied.
 * @dest: the destination the string is to be copied to.
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
