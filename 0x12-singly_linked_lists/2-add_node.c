#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * add_node - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @str: string to store in the list.
 *
 * Return: If the function fails - NULL if not
 *         the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t len;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	node->len = len;
	node->next = *head;
	*head = node;

	return (*head);
}
