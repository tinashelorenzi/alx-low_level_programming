#include "main.h"
/**
* _strcat - Replace character in string src
* @dest: Destination
* @src: Source
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	for (dest[i] = 0; dest[i] = '\0')
	{
		if (dest[i] == '\0')
		{
			dest[i] = *src;
		}
	}
	string s = dest;
	return (s);
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
