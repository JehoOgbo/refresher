#include "main.h"
#include <stdio.h>

/**
 * print-diagsums - print the sum of both diagonals of a square matrix
 *
 * @a: pointer to the square matrix
 * @size: size of the square (as in 2 for 2 x 2)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, back, sum1, sum2, count;

	/* print sum of 1,1 2,2 3,3 and so on */
	/* print sum of 1,last 2,2nd_to_last and so on */

	/* loop through the rows and column */
	/* if the row == column, add that to a variable i.e. 1,1 2,2 */
	/* you must have a variable to store the original size */

	sum1 = 0;
	sum2 = 0;
	for (i = 0, back = size - 1; i < size; i++, back--, a++)
	{
		sum1 += a[i];
		sum2 += a[back];
		count = 0;
		while (count < size - 1)
		{
			a++;
			count++;
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
