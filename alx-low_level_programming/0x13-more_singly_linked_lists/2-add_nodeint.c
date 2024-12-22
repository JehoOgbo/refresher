#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to pointer to the first node of the list
 * @n: data the node is to hold
 *
 * Return: address of new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->n = n;

	new->next = *head;
	*head = new;

	return (*head);
}
