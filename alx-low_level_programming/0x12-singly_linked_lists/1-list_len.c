#include "lists.h"

/**
 * list_len - returns the length of a list
 *
 * @h: pointer to the head node of the list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t length;

	if (!h)
	{
		return (0);
	}

	length = 0;
	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
