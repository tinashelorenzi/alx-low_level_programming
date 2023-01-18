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
	unsigned int index;

	if (array != NULL || size > 0 || action != NULL)
	{
		for (index = 0; index <= size; index++)
		{
			action(array[index]);
		}
	}
}
