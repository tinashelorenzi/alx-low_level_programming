#include "lists.h"

/**
 * free_listint2 - Frees list elements and sets null
 * @head: Pointer to first node address
 * Return: Nothing
 */


void free_listint2(listint_t **head)
{
if (temp != NULL)
{
while (*head != NULL)
{
cursor = *head;
free(cursor);
*head = (*head)->next;
}

*temp = NULL;

}
}
