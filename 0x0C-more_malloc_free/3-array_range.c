#include "main.h"
/**
 * array_range - Arrange ints from mix to max
 *
 * @min: Min int
 * @max: Max int
 * Return: Malloc address
 */
int *array_range(int min, int max)
{
	int *blk;
	int i, j = 0;

	if (min > max)
		return (NULL);
	blk = malloc(sizeof(*blk) * ((max - min) + 1));
	if (blk != NULL)
	{
		for (i = min; i <= max; i++)
		{
			blk[j] = i;
			j++;
		}
		return (blk);
	}
	else
		return (NULL);
}
