#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr, *curr1;

	curr = curr1 = head;
	while (curr && curr1 && curr1->next)
	{
		curr = curr->next;
		curr1 = curr1->next->next;
		if (curr == curr1)
		{
			curr = head;
			break;
		}
	}
	if (!curr || !curr1 || !curr1->next)
		return (NULL);
	while (curr != curr1)
	{
		curr = curr->next;
		curr1 = curr1->next;
	}
	return (curr1);
}
