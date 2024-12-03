#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value that the array must contain
 * @max: maximum value that the array must contain
 *
 * Return: the integer array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;	/* array being created */
	int calc;	/* number of bytes to allocate on the heap */
	int i;	/* value to be used for incrementing */


	calc = max - min + 2;
	/* min should never be greater than max */
	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (calc));
	/* if malloc fails return NULL */

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < calc; i++)
	{
		array[i] = min++;
	}

	return (array);
}
