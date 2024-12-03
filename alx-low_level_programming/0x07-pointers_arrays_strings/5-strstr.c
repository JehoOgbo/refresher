#include "main.h"

/**
 * _strstr - locates a substring
 *
 * Description: finds the first occurrence of the substring needle in the
 * string haystack. The terminating null bytes (\0) are not compared
 *
 * @haystack: the string which we are searching through
 * @needle: the string which we are looking for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, check;

	/* loop through the haystack by changing what it points to */
	for (; haystack; haystack++)
	{
		/* if the current char in haystack is same as first of needle */
		if (*haystack == *needle)
		{
			/* check if all the characters don't match */
			for (i = 1, check = 0; needle[i]; i++)
			{
				if (haystack[i] != needle[i])
				{
					/* check becomes 1 if there is a discrepancy */
					check = 1;
					break;
				}
			}
			/* if all the characters match, return the current position of haystack */
			if (check == 0)
			{
				return (haystack);
			}
		}
	}

	/* else (if nothing is found) return NULL */
	return (NULL);
}
