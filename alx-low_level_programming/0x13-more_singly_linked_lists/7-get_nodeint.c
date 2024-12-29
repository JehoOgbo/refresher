#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of the list
 *
 * @head: pointer to the head node of the list
 * @index: the index of the element to be found
 *
 * Return: a pointer to the node or NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head; head = head->next, i++)
	{
		if (i == index)
		{
			return (head);
		}
	}
	return (NULL);
}
