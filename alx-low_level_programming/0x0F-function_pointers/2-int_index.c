#include "function_pointers.h"

/**
 * int_index - searches for an integer within an array
 *
 * @array: array to be searched for the integer
 * @size: the size of the array
 * @cmp: pointer to a function to be used for comparison
 *
 * Return: the matching index on success, -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
