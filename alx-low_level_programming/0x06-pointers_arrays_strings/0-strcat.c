#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: string which is to be appended to
 * @src: string which is to be appended
 *
 * Return: the new concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *cat;
	int i, j;

	cat = dest;
	/* loop through dest until the end to get the last index */
	for (i = 0; dest[i]; i++)
	{
		;
	}
	/* append unto it saving new string */
	for (j = 0; src[j]; j++, i++)
	{
		cat[i] = src[j];
	}
	cat[i] = '\0';

	return (cat);
}
