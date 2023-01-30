#include "lists.h"

/**
 * get_nodeint_at_index - Extracts index number of a node
 * @head: First node address
 * @index: Index starting at 0
 * Return: Nothing, if nodes empty, 0
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				cursor =  head;
				break;
			}
			head = head->next;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	return (cursor);
}
