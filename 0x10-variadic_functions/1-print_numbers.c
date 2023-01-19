#include "variadic_functions.h"
/**
 * print_numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	va_start(list, int);
	int i;
	int num;
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf(%d, );
	}

}