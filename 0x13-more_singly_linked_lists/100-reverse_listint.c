#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *ne;

	prev = NULL;
	ne = NULL;

	while (*head != NULL)
	{
		ne = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = ne;
	}

	*head = prev;
	return (*head);
}
