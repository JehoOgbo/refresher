#include <stdio.h>
#include <stdlib.h>

int u_atoi(char *s);

/**
 * main - adds an unspecified number of positive integers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1 on error
 */
int main(int argc, char **argv)
{
	int i;
	int sum, check;

	(void) argc;

	i = 1;
	sum = 0;
	while (argv[i])
	{
		check = u_atoi(argv[i]);
		if (check >= 0)
		{
			sum += check;
		}
		else
		{
			puts("Error");
			return (1);
		}
		i++;
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * u_atoi - converts positive integers from string form to integer form
 *
 * @s: pointer to the string
 *
 * Return: -1 if an error is encountered, the positive integer otherwise
 */
int u_atoi(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (-1);
		}
		i++;
	}
	return (atoi(s));
}
