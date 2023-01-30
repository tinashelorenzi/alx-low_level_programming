#include "lists.h"

/**
 * add_nodeint_end - Creates node at the tail
 * @head: First node
 * @n: Number of nodes initially
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *cursor = *head;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail != NULL)
	{
		new_tail->n = n;
		new_tail->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;

		cursor->next = new_tail;
	}
	else
		*head = new_tail;
	return (new_tail);
}
