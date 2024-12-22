#include "lists.h"
#include <string.h>

/**
 * _strlen - finds the length of a string
 *
 * @s: string whose length is to be found
 *
 * Return: the length of the string
 */
size_t _strlen(char *s)
{
	size_t length;

	for(length = 0; *s; s++, length++);

	return (length);
}

/**
 * add_node_end - adds a node to the end of a linked list
 *
 * @head: pointer to pointer to the first node of the list
 * @str: information to be inputted into the node
 *
 * Return: address of the new element or NULL if the function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *point;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(new->str);
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	point = *head;
	while(point->next)
	{
		point = point->next;
	}

	point->next = new;

	return (new);
}
