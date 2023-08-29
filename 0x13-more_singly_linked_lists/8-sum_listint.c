#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of
 * a linked list.
 *
 * @head: head of a list.
 *
 * Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum_list = 0;

	while (head != NULL)
	{
		sum_list += head->n;
		head = head->next;
	}
	return (sum_list);
}
