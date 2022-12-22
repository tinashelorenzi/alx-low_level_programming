#include "main.h"
/**
* _strcat - Replace character in string src
* @dest: Destination
* @src: Source
*
* Return: Mutated string @dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int s = 0;

	while (dest[i++])
	{
		s++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[s++] = src[i];
	}
		return (dest);
}
