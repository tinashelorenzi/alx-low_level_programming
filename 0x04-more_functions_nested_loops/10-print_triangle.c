#include "main.h"
/**
*print_triangle - prints a triangle using hash
*@size:size of triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
	int include1;
	int include2;

	if (size > 0)
	{
		for (include1 = 1; include1 <= size; include1++)
		{
			for ((include2 = size - include1); include2 > 0; include2--)
			_putchar(' ');

			for (include2 = 0; include2 < include1; include2++)
			_putchar('#');

			if (include1 == size)
			continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
	}
