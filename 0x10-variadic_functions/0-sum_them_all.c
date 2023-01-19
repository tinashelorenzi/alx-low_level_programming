#include "variadic_functions.h"
/**
 * sum_them_all - Finds sum of int arguments
 * @n: Number of args passed to the function
 * Return: Sum computed
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	int i, sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}