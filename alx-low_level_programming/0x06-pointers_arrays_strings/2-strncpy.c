#include "main.h"

/**
 * _strncpy - copies a string
 *
 * Description: This  function copies  non-null bytes from the string pointed
 * to by src into the array pointed to by dest.  If the source has
 * too few non-null bytes to fill the destination, the functions
 * pad the destination with trailing null bytes.  If the destination
 * buffer, limited by its size, isn't large enough to hold the copy,
 * the resulting character sequence is truncated
 *
 * @dest: the destination to which the string is to be copied
 * @src: the source of the string
 * @n: The number of bytes to
 *
 * Return: the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy until src finishes or size of dest finishes */
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	/* add null byte for n - i */
	while (n - i)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
