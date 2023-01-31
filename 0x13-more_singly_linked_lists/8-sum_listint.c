#include "lists.h"

/**
 * sum_listint - Sums up elements of list
 * @head: First node
 * Return: Sum(Total)
 */


int sum_listint(listint_t *head)
{
        int sum = 0;
        listint_t *temp = head;

        while (temp)
        {
                sum += temp->n;
                temp = temp->next;
        }

        return (sum);
}
