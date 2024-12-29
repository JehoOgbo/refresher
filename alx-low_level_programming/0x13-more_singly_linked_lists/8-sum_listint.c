#include "lists.h"

/**
 * sum_listint - return the sum of all the elements in a listint_t list
 *
 * @head: the pointer to the first node of the list
 *
 * Return: the sum of all the data (n) contained in the list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
