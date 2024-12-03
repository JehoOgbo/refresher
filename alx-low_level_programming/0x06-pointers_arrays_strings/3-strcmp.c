#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * Description: Does this based on the difference between the
 * ascii value of the first characters that are not the same.
 *
 * @s1: first string to be used in comparison
 * @s2: the other string
 *
 * Return: collective ascii value of first string - second string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* loop through the string till you find an entry that's different in both */
	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	/* check to see that s2 wasn't still remaining */
	if (s2[i])
	{
		return(s2[i]);
	}

	return (0);
}
