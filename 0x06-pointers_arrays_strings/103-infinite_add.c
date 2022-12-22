#include "main.h"

/**
* infinite_add - C function that adds two numbers stored
*in strings to a buffer.
* Multiple conditions checked
*@n1:first number to be added
*@n2:second number to be added
*@r: store result
*@size_r: size of buffer
*Return:returns pointer to result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
* add_strings - Adds the numbers stored in two strings.
* @n1: The string containing the first number to be added.
* @n2: The string containing the second number to be added.
* @r: The buffer to store the result.
* @dexer: The current index of the buffer.
*
* Return: If r can store the sum - a pointer to the result.
*         If r cannot store the sum - 0.
*/

char *add_strings(char *n1, char *n2, char *r, int dexer)
{
	int number, tens = 0;

	for (; *n1 && *n2; n1--, n2--, dexer--)
	{
		number = (*n1 - '0') + (*n2 - '0');
		number += tens;
		*(r + dexer) = (number % 10) + '0';
		tens = number / 10;
	}

	for (; *n1; n1--; dexer++)
	{
		number = *(n1 - '0') + tens;
		*(r + dexer) = (number % 10) + '0';
		tens = number / 10;
	}

	for (; *n2; n2--;  dexer--)
	{
		number = (*n2 - '0') + tens;
		*(r + dexer) = (number % 10) + '0';
		tens = number / 10;
	}

}
