#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
 * _reala - reallocates memory for an array of pointers
 *
 * @list: the old list to append.
 *
 * @size: size of the new list.
 *
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **_reala(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new_list;
	size_t temp;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (temp = 0; temp < size - 1; temp++)
		new_list[temp] = list[temp];
	new_list[temp] = new;
	free(list);
	return (new_list);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (count = 0; count < num; count++)
		{
			if (*head == list[count])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _reala(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
