#include "lists.h"

/**
 * pop_listint - Deletes first node of list
 * @head: First node address
 * Return: 0 of empty, nothing if complete
 */


int pop_listint(listint_t **head)
{
	listint_t *popped;
	int stuff;

	if (*head == NULL)
	return (0);

	popped = *head;
	stuff = popped->n;
	free(popped);

	*head = (*head)->next;
	return (stuff);

}
