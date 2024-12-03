#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * Description: concatenates strings till a limit is reached
 *
 * @dest: the destination to which a string is to be appended
 * @src: the string which is to be appended
 * @n: a limit on the number of bytes to be copied
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* loop through dest until you get the last index */
	for (i = 0; dest[i]; i++)
	{
		;
	}
	/* append unto it. Be careful not to go further than n bytes */
	for (j = 0; src[j] && j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	/* if src ends before n is reached add null byte and return */
	/* do this anyway */
	dest[i] = '\0';

	return (dest);
}
