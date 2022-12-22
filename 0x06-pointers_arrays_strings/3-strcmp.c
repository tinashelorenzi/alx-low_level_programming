#include "main.h"
/**
* _strcmp - Compare strings
* @s1: First string
* @s2: Second string
*
* Return: Difference in int ascii
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return ((int)(s1[i] - s2[i]));
		}
	}
	return ((int)(s1[i] - s2[i]));
}
