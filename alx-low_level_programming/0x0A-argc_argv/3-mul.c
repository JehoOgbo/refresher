#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print the product of two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1 on error
 */
int main(int argc, char **argv)
{
	int x;
	int y;

	/* if the program does not receive two args print error and return 1 */
	if (argc != 3)
	{
		puts("error");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);

	return (0);
}
