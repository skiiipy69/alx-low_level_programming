#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *new_node;

	while ((new_node = head) != NULL)
	{
		head = head->next;
		free(new_node);
	}
}
