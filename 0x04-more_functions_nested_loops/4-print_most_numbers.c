#include "main.h"
/**
*print_most_numbers - function that print all numbers from
*0 to 9 excluding 2 and 4
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
	int a = 48;

	for (a = 48; a < 58; a++)
	{
		if ((a != 50) && (a != 52))
			_putchar(a);
	}
	_putchar(10);
}
