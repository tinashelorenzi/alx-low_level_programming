#include "main.h"
/**
* puts_half - Prints half string
* @str: string to check
* Return: 0
*/
void puts_half(char *str)
{
	int length = _strlen(str);

	if (length % 2 == 0)
	length = length / 2;

	else
	length = (length + 1) / 2;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
/**
* _strlen - Checks length of string
* @s: string to check
* Return: 0
*/
int _strlen(char *s)
{
	int counter, i;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
