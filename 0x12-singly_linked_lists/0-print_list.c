#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of `list_t` list
 * @h: head first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *check;
	size_t i;

	i = 0;
	check = h;
	while (check != NULL)
	{

		printf("[%d] %s\n", check->len, check->str);
		check = check->next;
		i++;
	}

	return (i);
}
