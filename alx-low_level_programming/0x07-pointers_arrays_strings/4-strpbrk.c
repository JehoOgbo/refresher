#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s: string to be searched
 * @accept: string containing the bytes being looked for
 *
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept or NULL if none.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}

	return (NULL);
}
