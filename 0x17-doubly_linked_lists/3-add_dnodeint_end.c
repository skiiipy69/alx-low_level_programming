#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	while (temp && temp->next)
		temp = temp->next;

	if (temp)
	{
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
