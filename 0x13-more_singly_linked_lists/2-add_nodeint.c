#include "lists.h"
/**
 * add_nodeint - Adds note to the end of list
 * @head: First node
 * @n: Number of nodes
 */



listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_tail;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;
	new_tail->next = *head;

	*head = new_tail;

	return (new_tail);
}
