#include "lists.h"

/**
 * print_list - Print the data stored in the nodes of a linked list
 * @h: A pointer to the first node in the linked list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
