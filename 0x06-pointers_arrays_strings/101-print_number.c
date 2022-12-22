#include "main.h"
/**
* print_number - Changes integers with signs
* @n: Integer
*
* Return: New string
*/
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	int digits[10];
	int num_digits = 0;

	while (n > 0)
	{
		digits[num_digits] = n % 10;
		n /= 10;
		num_digits++;
	}

	for (int i = num_digits - 1; i >= 0; i--)
	{
		putchar(digits[i] + '0');
	}
}
