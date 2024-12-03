#include "main.h"

/**
 * create_array - creates an array of chars and initializes
 * it with a specific character
 * 
 * @size: size of the array to be created
 * @c: character to be used for initialization
 *
 * Return: pointer to the created array or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* return NULL if size is 0 */
	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	/* check that the operation (malloc) was successful */
	if (!array)
	{
		return (NULL);
	}

	/* set each member of array */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
