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
	int length = 0;
	int j;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0' && length < n - 1; ++j, ++length)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}
