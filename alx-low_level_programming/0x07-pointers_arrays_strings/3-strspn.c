#include "main.h"

/**
 * _strspn - gets the length of a prefix using a substring
 *
 * @s: the string being inspected for the prefix
 * @accept: the substring used for inspection
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count, on;

	for (count = 0; s; s++)
	{
		for (on = 0, i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				on = 1;
				break;
			}
		}
		if (on == 0)
			break;
		count++;
	}

	return (count);
}
