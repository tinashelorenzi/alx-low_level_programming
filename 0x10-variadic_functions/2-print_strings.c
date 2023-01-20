#include "variadic_functions.h"
/**
 * 
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("");
		}
		if ((va_arg(list, char *)) == NULL)
		{
			printf("%s%", "(nil)");
		}
		printf("%d", va_arg(list, char *));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}