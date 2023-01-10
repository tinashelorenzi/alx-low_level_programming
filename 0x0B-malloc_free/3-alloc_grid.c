#include "main.h"
#include <stdlib.h>


/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **arra;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	arra = (int **) malloc(sizeof(int *) * height);
	if (arra != NULL)
	{
		for (; i < height; i++)
		{
			arra[i] = (int *) malloc(sizeof(int) * width);
			if (arra[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arra[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arra[i]);
					i--;
				}
				free(arra);
				return (NULL);
			}
		}
		return (arra);
	}
	else
	{
		return (NULL);
	}
}
