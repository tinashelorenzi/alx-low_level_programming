#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:No return
*/
void print_square(int size)
{
	int include1, include2;

	if (size > 0)
	{
		for (include1 = 0; include1 < size; include1++)
		{
			for (include2 = 0; include2 < (size - 1); include2++)
			_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
