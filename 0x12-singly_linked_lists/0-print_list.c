#include "lists.h"
#include <stdio.h>
/**
 * print_list - print all elements of `list_t`
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t check_function = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		check_function++;
		h = h->next;
	}

	return (check_function);
}
