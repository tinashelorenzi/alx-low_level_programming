#include "main.h"
/**
* Checks length of string
* @s: string to check
* Return: 0
*/
int _strlen(char *s)
{
	int counter, i;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
