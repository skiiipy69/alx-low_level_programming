#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	first_node = temp->n;
	*head = temp->next;
	free(temp);

	return (first_node);
}
