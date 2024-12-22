#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that runs a simple calculator
 *
 * Description: handles operations add, subtract, multiplication
 *              division and modulus
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result;
	int a, b;


	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = (get_op_func(argv[2]))(a, b);

	printf("%d\n", result);

	return (0);
}
