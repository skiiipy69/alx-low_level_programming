#include "lists.h"

/**
 * dlistint_len - Find the number of nodes in a doubly linked list
 *
 * @h: head pointer to LL
 *
 * Return: number of nodes in LL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
