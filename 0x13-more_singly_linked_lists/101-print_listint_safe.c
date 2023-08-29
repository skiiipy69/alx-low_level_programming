#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
 * _real - reallocates memory for an array of pointers
 *
 * @list: the old list to append
 *
 * @size: size of the new list.
 *
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_real(const listint_t **list, size_t size,
			const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t new_node, count = 0;
	const listint_t **temp = NULL;

	while (head != NULL)
	{
		for (new_node = 0; new_node < count; new_node++)
		{
			if (head == temp[new_node])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(temp);
				return (count);
			}
		}
		count++;
		temp = _real(temp, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(temp);
	return (count);
}
