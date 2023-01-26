#include "list.h"
/**
 * print_list - Prints the contents of linked list
 * @list_t: Linked list
 */

size_t print_list(const list_t *h)
{
	const list_t *ref = h;
	size_t count = 0;

	while (ref != NULL)
	{
		if (ref->str != NULL)
		{
			printf("[%d] %s\n", ref->len, ref->str);
		}
		else
		{
			printf("[0] (nil)\n");
			count += 1;
			ref = ref->next;
		}
	}
	return (count);
}
