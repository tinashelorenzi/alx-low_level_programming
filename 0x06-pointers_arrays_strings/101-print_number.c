#include "main.h"
/**
* rot13 - Changes chars to rot13 encoding
* @s: Array/string
*
* Return: New string
*/
void print_number(int n)
{
	unassigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
