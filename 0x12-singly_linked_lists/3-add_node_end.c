#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: first node of the list pointer
 *
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *i;
	size_t node;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	for (node = 0; str[node]; node++)
		;

	add->len = node;
	add->next = NULL;
	i = *head;

	if (i == NULL)
	{
		*head = add;
	}
	else
	{
		while (i->next != NULL)
			i = i->next;
		i->next = add;
	}

	return (*head);
}
