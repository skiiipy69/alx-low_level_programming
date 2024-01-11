#include "lists.h"

/**
 * print_dlistint - Print all the values of each node in a `dlistint_t` list
 *
 * @h: head pointer in doubly linked list
 *
 * Return: Number of nodes in LL
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count_nodes);
}
