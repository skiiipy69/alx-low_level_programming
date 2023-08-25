#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - Returns the number of elements
 *               in a linked listint_t list.
 *
 * @h: pointer head of the listint_t list.
 *
 * Return: number of elements in the listint_t list.
 */

size_t list_len(const list_t *h)
{
	int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
