#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new_node;
	const listint_t *temp;
	size_t i;

	new_node = head;
	if (new_node == NULL)
		exit(98);

	i = 0;
	while (new_node != NULL)
	{
		temp = new_node;
		new_node = new_node->next;
		i++;
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp < new_node)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}

	return (i);
}
