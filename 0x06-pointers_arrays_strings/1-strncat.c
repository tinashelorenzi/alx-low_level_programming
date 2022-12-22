#include "main.h"
/**
* _strncat - Concatenate strings
* @dest: Destination
* @src: Source
* @n: Size of string
*
* Return: Mutated string @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int length;

	while (s1[length] != '\0')
	{
		++length;
	}
	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[n] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
