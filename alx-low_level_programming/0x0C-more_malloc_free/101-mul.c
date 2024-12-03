#include <stdio.h>
#include <stdlib.h>

__int128_t _atoi(char *s);
int _strlen(char *s);
__int128_t _pow(__int128_t num, int exp);
void printer(__int128_t num);
void print_number(__int128_t n);
int _putchar(char c);

/**
 * main - program to find the product of two numbers
 * passed as command line args
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or exit(98) on error
 */
int main(int argc, char **argv)
{
	int i;
	__int128_t array[2];

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < 2; i++)
	{
		array[i] = _atoi(argv[i + 1]);
	}

	print_number(array[0] * array[1]);

	return (0);
}

/**
 * _pow - raises a number to a power
 *
 * @num: number which is to be raised
 * @exp: the power or exponent
 *
 * Return: the value of the operation
 */
__int128_t _pow(__int128_t num, int exp)
{
	__int128_t save;

	if (exp == 0)
		return (1);

	save = num;

	while (exp > 1)
	{
		num = num * save;
		exp--;
	}
	return (num);
}

/**
 * _atoi - converts a string into an integer
 *
 * Description:
 * The number can be preceeded by infinite no. of characters
 * You need to take into account all the - and + signs before the no.
 * Do not use long, array or hardcode values
 *
 * @s: the string which is to be converted
 *
 * Return: return the integer
 */
__int128_t _atoi(char *s)
{
	int  digits;
	int i;
	__int128_t num;

	digits = _strlen(s) - 1;
	/* loop through the string */
	for (i = 0, num = 0; s[i]; i++)
	{
		/* if you come across anything that's not a digit, exit */
		if (s[i] < '0' || s[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}

		/* convert as you go along */
		num += (s[i] - 48) * _pow(10, digits);
		digits--;
	}

	return (num);
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

/**
 * print_number - prints a number character by character
 * Description: You can use only _putchar to print
 *
 * @n: number to be printed
 * Return: void
 */
void print_number(__int128_t n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	/* print the number recursively */
	printer(n);
	_putchar('\n');
}

/**
 * printer - does the actual printing recursively
 * Description: This function cannot print zero
 *
 * @num: number to be printed
 * Return: void
 */
void printer(__int128_t num)
{
	if (num == 0)
		return;
	printer(num / 10);
	/* 48 is added to make this a numeral see man ASCII */
	_putchar(num % 10 + 48);
}
