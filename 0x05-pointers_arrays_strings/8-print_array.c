#include "main.h"
/**
* print_array - Prints elements of arr
* @a: First check
* @n: Second check
* Return: 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}

	}
	printf("\n");
}
