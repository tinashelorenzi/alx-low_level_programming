#include "main.h"
/**
* reverse_array - Reverse an array
* @a: Array
* @n: Array size
*
* Return: Reversed array
*/
void reverse_array(int *a, int n)
{
	size_t i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
