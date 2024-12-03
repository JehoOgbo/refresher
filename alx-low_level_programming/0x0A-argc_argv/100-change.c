#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum amount of coins needed to make
 * change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num, i;
	int count;
	int store;
	int check[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (num <= 0)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}

	i = 0;
	count = 0;
	while (check[i] && num)
	{
		store = num / check[i];
		/* only decrease num when count increases */
		if (store)
		{
			num = num - check[i] * store;
			count += store;
		}
		i++;
		store = 0;
	}

	printf("%d\n", count);

	return (0);
}
