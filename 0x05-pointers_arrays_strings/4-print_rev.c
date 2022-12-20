#include "main.h"
/**
* print_rev - Revereses a string
* @s: string
* Return: 0
*/
void print_rev(char *s)
{
	int len = 0, index = 0;
	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
	_putchar(s[index]);

	_putchar('\n');
}
