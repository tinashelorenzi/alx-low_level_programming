#include "lists.h"
/**
 * print_list - Prints the contents of linked list
 * @h: Linked list
 * Return: Number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
