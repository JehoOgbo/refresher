#include "function_pointers.h"

/**
 * array_iterator - executes a function as a given parameter
 * on each element of an array
 *
 * @array: array on whose members the operation must be executed
 * @size: the size of the array
 * @action: pointer to the function to be executed on each member of array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
