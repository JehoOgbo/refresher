#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the first element of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
