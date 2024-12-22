#include "lists.h"

/**
 * pop_listint - removes the head element of a listint_t list
 *
 * @head: pointer to pointer to the first element of the list
 *
 * Return: the data stored in the removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	old_head = *head;
	*head = (*head)->next;

	free(old_head);

	return (num);
}
