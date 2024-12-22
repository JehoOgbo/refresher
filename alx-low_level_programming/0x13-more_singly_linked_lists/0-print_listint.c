#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements (nodes) of a listint_t list
 *
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
