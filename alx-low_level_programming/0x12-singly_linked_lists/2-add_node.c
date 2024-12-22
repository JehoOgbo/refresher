#include "lists.h"
#include <string.h>
#include <stdlib.h>

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

	length = 0;
	while(*s)
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the address of the head node in the list
 * @str: string to be input into the node
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(new->str);

	new->next = *head;
	*head = new;

	return (*head);
}
