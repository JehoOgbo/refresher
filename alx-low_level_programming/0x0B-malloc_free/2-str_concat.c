#include "main.h"

int _strlen(char *s);

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string which is to be appended to
 * @s2: the string which is to appended
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int length, length2;
	int i, j, k;

	if (!s2)
	{
		return (s1);
	}

	length = _strlen(s1);
	length2 = 1 + _strlen(s2);

	cat = malloc(sizeof(char) * (length + length2));
	if (!cat)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		cat[i] = s1[i];
	}

	k = i;
	/* k used because i always gets incremented */
	for (j = 0; j < (length + length2 - k); j++, i++)
	{
		cat[i] = s2[j];
	}

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
