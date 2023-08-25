#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - free a list
 * @head: head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
