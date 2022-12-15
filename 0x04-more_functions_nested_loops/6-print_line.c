#include "main.h"
/**
*print_line - prints a straight line through
*@n:parameter
*Return: No return
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
