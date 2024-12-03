#include "main.h"

int *create_int_array(unsigned int size);
char *create_char_array(unsigned int size);
int find_words(char *str);

/**
 * strtow - splits a string into words
 *
 * @str: string to be converted
 *
 * Return: pointer to a two dimensional array that's essentially
 * a list of the words
 */
char **strtow(char *str)
{
	char **store;
	int i, hold, words, l, idx;
	int *index, *characters;
	int check;

	if (!str)
	{
		return (NULL);
	}

	words = find_words(str);
	index = create_int_array(words);
	characters = create_int_array(words);

	for (i = 0, check = 0, idx = 0; str[i]; i++)
	{
		/* check for first occurence of a character then first of space */
		if (str[i] != ' ')
		{
			if (check == 0)
			{
				index[idx] = i;
				idx++;
				characters[idx] = 0;
			}
			check = 1;
			/* count the characters */
			/* save the beginning in index and save the number of characters in char */
			characters[idx - 1] = characters[idx - 1] + 1;
		}
		else
		{
			check = 0;
		}
	}

	store = (char **)malloc(sizeof(char *) * (words + 1));
	if (!store)
	{
		return (NULL);
	}
	for (i = 0; i < words; i++)
	{
		store[i] = create_char_array(characters[i] + 1);
	}
	/* create those spaces on the arrays inside of store */
	/* fill the letters into the words */
	for (i = 0; i < words; i++)
	{
		hold = index[i];
		for (l = 0; l < characters[i]; l++, hold++)
		{
			store[i][l] = str[hold];
		}
		store[i][l] = '\0';
	}

	store[words] = NULL;

	free(characters);
	free(index);

	return (store);
}

/**
 * create_char_array - creates an array of chars and initializes
 * it with a specific character
 *
 * @size: size of the array to be created
 * @c: character to be used for initialization
 *
 * Return: pointer to the created array or NULL on failure
 */
char *create_char_array(unsigned int size)
{
	char *array;
	/* unsigned int i;*/

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

	return (array);
}

/**
 * find_words - finds the number of spaces in a string
 *
 * Description: counts multiple spaces as a single space
 *
 * @str: string which is to be checked
 *
 * Return: the number of words in the string based on the number of spaces
 */
int find_words(char *str)
{
	int words, i, check;

	/* check the first occurence of a character and count */
	/* whenever space is reached reset your check */
	for (i = 0, words = 0, check = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (check == 0)
			{
				words++;
			}
			check++;
		}
		else
		{
			check = 0;
		}
	}
	
	return (words);
}

/**
 * create_int_array - creates an array of chars and initializes
 * it with a specific character
 *
 * @size: size of the array to be created
 * @c: character to be used for initialization
 *
 * Return: pointer to the created array or NULL on failure
 */
int *create_int_array(unsigned int size)
{
	int *array;

	/* return NULL if size is 0 */
	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * size);
	/* check that the operation (malloc) was successful */
	if (!array)
	{
		return (NULL);
	}

	return (array);
}
