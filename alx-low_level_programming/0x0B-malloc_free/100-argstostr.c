#include "main.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * argstostr - concatenates all arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: the new concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int i, j, k;
	int length;

	for (i = 0, length = 1 + ac; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	
	cat = malloc(sizeof(char) * length);
	if (!cat)
	{
		return (NULL);
	}

	for (i = 0, k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			cat[k] = av[i][j];
		}
		cat[k] = '\n';
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
