#include "lists.h"

/**
 * listint_len - finds the length of a listint_t list
 *
 * @h: pointer to the first element of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(listint_t *h)
{
	size_t length;

	length = 0;
	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
