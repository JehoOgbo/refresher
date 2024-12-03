#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string which is to be appended to
 * @s2: the string which is to appended
 * @n: the number of bytes from s2 which is to be added to s1
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat, *s;
	unsigned int length, length2;
	unsigned int i, j, k;

	if (!s2 || n == 0)
	{
		return (s1);
	}

	/* If n is greater or equal to the length of s2 then */
	/* use the entire string s2 */

	length = _strlen(s1);
	length2 = 1 + _strlen(s2);

	if (n < length2)
	{
		n = length2;
	}

	cat = malloc(sizeof(char) * (length + n));
	if (!cat)
	{
		return (NULL);
	}

	for (i = 0, k = 0; i < 2; i++)
	{
		if (i == 0)
		{
			s = s1;
		}
		else
		{
			s = s2;
		}
		for (j = 0; k < n && s[j]; j++, k++)
		{
			cat[k] = s[j];
		}
	}
	cat[k] = '\0';

	return (cat);
}

/**
 * _strlen - finds the length of a string
 *
 * @s: pointer to string whose length is to be found
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count])
	{
		count++;
	}

	return (count);
}
