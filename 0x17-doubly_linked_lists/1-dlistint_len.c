#include "lists.h"

/**
 * dlistint_len - Find the number of nodes in a doubly linked list
 * @h: head pointer to LL
 * Return: number of nodes in LL
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t nodes_count;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;

	for (nodes_count = 0; tmp; nodes_count++, tmp = tmp->next)
		;

	return (nodes_count);
}
