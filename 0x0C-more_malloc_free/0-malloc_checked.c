#include "main.h"
/**
 * malloc_checked - Checks memory alloc for intb
 * @b: Int to Check
 * Return: 98 if fail
 * Or return address
 */

void *malloc_checked(unsigned int b);
{
	void *rat;

	rat = malloc(b);
	if (rat == NULL)
	{
		exit(98);
	}
	return (rat);
}
