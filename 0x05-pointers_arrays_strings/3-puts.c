#include "main.h"
/**
* _puts - Prints string
* @str: string
* Return: 0
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n';)
}
