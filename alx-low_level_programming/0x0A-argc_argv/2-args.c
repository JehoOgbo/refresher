#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: argument count
 * @argv: two dimensional array containing a list of all the args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	(void) argc;

	i = 0;
	while (argv[i])
	{
		puts(argv[i]);
		i++;
	}

	return (0);
}
