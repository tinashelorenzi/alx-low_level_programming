#include "lists.h"

/**
 * pop_listint - Deletes first node of list
 * @head: First node address
 * Return: 0 of empty, nothing if complete
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
