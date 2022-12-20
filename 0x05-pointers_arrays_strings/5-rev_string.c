#include "main.h"
/**
* rev_string - Revereses a string
* @s: string
* Return: 0
*/
void rev_string(char *s)
{
	int len = 0, index = 0;
	char word[_strlen(s)]

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
	word[index] = (s[index]);

	return (word);
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
