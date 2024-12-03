#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string in which character is to be found
 * @c: character which is being looked for
 *
 * Return: a pointer to the first occurence of that character
 */
char *_strchr(char *s, char c)
{
	for (; s; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
