#include "lists.h"

/**
 * print_listint - Prints elements in list of int
 * List is singly linked
 * @h: List of ints(Singly linked)
 * Return: Number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->int)
		{
			printf("%s\n", h->int);
		}
		h = h->next;
		s++;
	}

	return (s);
}
