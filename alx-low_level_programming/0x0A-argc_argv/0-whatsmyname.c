#include <stdio.h>

/**
 * main - function to print the name of the program that calls it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: essentially to learn basics of using argc and argv
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	puts(argv[0]);

	return (0);
}
