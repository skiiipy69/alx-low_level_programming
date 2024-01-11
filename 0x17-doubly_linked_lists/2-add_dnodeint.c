#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 *
 * @head: double pointer to the beginning of the linked list
 *
 * @n: value to add to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (tmp == NULL)
		new->next = NULL;
	else
	{
		while (tmp->prev)
			tmp = tmp->prev;

		tmp->prev = new;
		new->next = tmp;
	}
	*head = new;

	return (*head);
}
