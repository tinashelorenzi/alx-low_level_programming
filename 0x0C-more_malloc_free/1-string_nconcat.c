#include "main.h"
/**
 * string_nconcat - Concat 2 strings
 * @s1: String 1
 * @s2: String 2
 * @n: Size
 * Return: Address of new strcat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char s3[100];
	int i = 0, j = 0;

	while (str1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
