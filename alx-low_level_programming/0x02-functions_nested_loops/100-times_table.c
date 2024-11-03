#include "main.h"
#include <stdio.h>

/**
 * count_spaces - count the number of digits and print spaces
 *
 * Description: For proper formatting of output
 * @product: the number whose digits are to be counted
 *
 * Return: void
 */
void count_spaces(int product)
{
	int count;
	int spaces;

	count = 0;
	/* even 0 is a 1 digit no. */
	if (product == 0)
		count = 1;
	while (product)
	{
		product = product / 10;
		count++;
	}
	/* no. of spaces must be 4 - no. of digits */
	spaces = 4 - count;
	while (spaces)
	{
		_putchar(' ');
		spaces--;
	}
}

/**
 * print_product - prints a number digit by digit
 *
 * Description: Recursive function to print a number
 * @product: the number to be printed
 * @count: control zero printing at start
 *
 * Return: void
 */
void print_product(int product, int count)
{
	if (product == 0)
	{
		if (count == 0)
			_putchar('0');
		return;
	}
	count++;
	print_product(product / 10, count);
	_putchar(product % 10 + 48);
}

/**
 * print_times_table - prints the times table of input variable
 *
 * @n: number whose times table is to be printed
 * Return: void
 */
void print_times_table(int n)
{
	int row, column;

	/* return if NULL */
	if (!n)
		return;
	/* return if n is too big or small */
	if (n < 0 || n > 15)
		return;

	row = 0;
	while (row <= n)
	{
		column = 0;
		while (column <= n)
		{
			/* print the spaces and comma */
			/* if row and column is zero */
			/* no need for spaces */
			if (column != 0)
				count_spaces(row * column);

			/* print row * column with _putchar */
			print_product(row * column, 0);

			/* don't use comma at end of row */
			if (column != n)
				_putchar(',');

			column++;
		}
		_putchar('\n');
		row++;
	}
}
