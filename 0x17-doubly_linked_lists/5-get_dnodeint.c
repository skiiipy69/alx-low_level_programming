#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the indexed node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int c;

	temp = head;
	for (c = 0; temp && c < index; temp = temp->next, c++)
		;

	return (temp);
}
