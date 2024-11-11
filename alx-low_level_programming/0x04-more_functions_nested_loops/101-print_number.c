#include "main.h"

void printer(int num);

/**
 * print_number - prints a number character by character
 * Description: You can use only _putchar to print
 *
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
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

	return;
}

/**
 * printer - does the actual printing recursively
 * Description: This function cannot print zero
 *
 * @num: number to be printed
 * Return: void
 */
void printer(int num)
{
	if (num == 0)
		return;
	printer(num / 10);
	/* 48 is added to make this a numeral see man ASCII */
	_putchar(num % 10 + 48);
}
