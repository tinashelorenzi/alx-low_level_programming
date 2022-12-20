#include "main.h"
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
