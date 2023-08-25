#include <stdlib.h>
#include <string.h>

/**
 * print_list - check the code
 * @h: name of the list
 * Return: number of node.
 */

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
