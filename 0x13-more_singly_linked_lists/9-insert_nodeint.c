#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 *
 * @head: double pointer to head
 *
 * @index: insert node at this index, starting count at 0
 *
 * @n: value to store in node
 *
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = *head;
	for (i = 1; new_node && i < index; i++)
	{
		new_node = new_node->next;
		if (new_node == NULL)
			return (NULL);
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;

	if (index == 0)
	{
		*head = temp;
		temp->next = new_node;
	}
	else if (new_node->next)
	{
		temp->next = new_node->next;
		new_node->next = temp;
	}
	else
	{
		temp->next = NULL;
		new_node->next = temp;
	}

	return (temp);
}
