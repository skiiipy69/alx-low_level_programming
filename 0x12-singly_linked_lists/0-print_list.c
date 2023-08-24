#include "lists.h"
#include <stdio.h>
/**
 * print_list - print all elements of `list_t`
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t check = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{

		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

		check += 1;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (check);
}
