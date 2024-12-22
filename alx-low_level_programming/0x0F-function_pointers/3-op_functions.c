#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - simple function to add two numbers
 *
 * @a: one of the numbers to be added
 * @b: the second number
 *
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - simple function to find the difference between two numbers
 *
 * @a: the number from which the other is to be subtracted
 * @b: the number to be subtracted
 *
 * Return: the difference between the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - simple function to find the product of two numbers
 *
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - simple function to find the result of the division of two numbers
 * Description: This is integer division and if the result is not an integer,
 * 		it is truncated
 *
 * @a: the number to be divided
 * @b: the divisor
 *
 * Return: the dividend
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - simple function to find the modulus of a number divided by another
 *
 * @a: the number to be divided
 * @b: the divisor
 *
 * Return: the remainder after the multiplication
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
