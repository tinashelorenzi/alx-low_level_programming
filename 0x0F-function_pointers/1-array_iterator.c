#include "function_pointers.h"
/**
 * array_iterator - Itr trough arrays and perform action
 * @array: Input array to function
 * @size: Size of array
 * @action: Function to throw index to
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == NULL)
	{
		return;
	}
	int i;

	for (i = 0; i <= size; i++)
	{
		action(*array[i]);
	}
}
