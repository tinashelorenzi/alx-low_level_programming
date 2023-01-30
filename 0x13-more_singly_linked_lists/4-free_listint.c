#include "lists.h"

/**
 * free_listint - Removes node from list
 * @head: First node
 * Return: Nothing
 */


void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
	tmp = head;
	head = head->next;
	free(tmp);
	}
}
