#include "lists.h"

/**
 * add_nodeint_end - adds a new element to the end of a listint_t list
 *
 * @head: pointer to pointer to the first element of the list
 * @n: the data to be filled into the node
 *
 * Return: a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;
	if (head == NULL)
	{
		head = &new;
		return (*head);
	}
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;

	return (new);
}
