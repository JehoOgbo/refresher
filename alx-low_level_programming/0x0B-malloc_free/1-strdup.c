#include "main.h"

int _strlen(char *s);

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: string whose copy is to be created
 *
 * Return: pointer to the new string or NULL on failure
 */
char *_strdup(char *str)
{
	int length;
	int i;
	char *copy;

	if (!str)
	{
		return (NULL);
	}

	length = 1 + _strlen(str); /* 1 to account for the null byte */

	copy = malloc(sizeof(char) * length);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
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
