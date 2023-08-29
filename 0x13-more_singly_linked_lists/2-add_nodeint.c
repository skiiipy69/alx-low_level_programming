#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 *		beginning of a list.
 *
 * @head: first node pointer
 *
 * @n: int value to store in new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint;

	new_nodeint = malloc(sizeof(listint_t));

	if (new_nodeint == NULL)
		return (NULL);

	new_nodeint->n = n;
	new_nodeint->next = *head;
	*head = new_nodeint;

	return (*head);
}
