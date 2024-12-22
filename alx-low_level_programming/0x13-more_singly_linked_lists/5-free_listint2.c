#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * Description: sets the head pointer to NULL before return
 *
 * @head: pointer to pointer to the first element of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
