#include "main.h"

/**
 * realloc - Reallocate mem(malloc)
 * @ptr: Pointer to mem
 * @old_size: Initial size
 * @new_size: New malloc size
 * Return: New pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp_blk;
	unsigned int i;

	if (ptr == NULL)
	{
		tmp_blk = malloc(new_size);
		return (tmp_blk);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tmp_blk = malloc(new_size);
		if (tmp_blk != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)tmp_blk + i) = *((char *) ptr + i);
			free(ptr);
			return (tmp_blk);
		}
		else
			return (NULL);
	}
}
