#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to check
 *
 * Return: address of the node where the loop starts, or Nothing
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw = head;
	listint_t *fst = head;

	if (!head)
		return (NULL);

	while (slw && fst && fst->next)
	{
		fst = fst->next->next;
		slw = slw->next;
		if (fst == slw)
		{
			slw = head;
			while (slw != fst)
			{
				slw = slw->next;
				fst = fst->next;
			}
			return (fst);
		}
	}

	return (NULL);
}
