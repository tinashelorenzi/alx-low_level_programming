#include "lists.h"

/**
 * listint_len - Return number of nodes in int
 * list
 * @h: Pointer to the list
 * Return: Number of nodes
 */


size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
