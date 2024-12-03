#include "main.h"

int _strlen(char *s);
int pal(char *s, int length, int n);

/**
 * is_palindrome - checks if a string is palindrome
 *
 * @s: pointer to the string which is to be checked
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length, yes;

	length = _strlen(s);

	yes = pal(s, length - 1, 0);

	if (yes < length / 2)
	{
		return (0);
	}

	return (1);
}

/**
 * _strlen - counts the number of characters in a string
 *
 * @s: string whose length is to be counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if(!(*s))
	{
		return (0);
	}

	s++;
	return (1 + _strlen(s));
}

/**
 * pal - checks if a string is palindrome
 *
 * @s: pointer to the string
 * @length: length of the string
 * @n: starting index for checking palindrome
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int pal(char *s, int length, int n)
{
	if (n == length || n > length)
	{
		return (1);
	}
	if (s[n] == s[length])
	{
		return (1 + pal(s, length - 1, n + 1));
	}

	return (0);
}
