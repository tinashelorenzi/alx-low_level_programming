/**
* rot13 - Changes chars to rot13 encoding
* @s: Array/string
*
* Return: New string
*/
char *rot13(char *s)
{
	int index = 0;

	while (s[index])
	{
		// If the current character is a letter, shift it by 13 places
		if (my_isalpha(s[index]))
		{
			s[index] = ((s[index] - 'A' + 13) % 26) + 'A';
		}
		index++;
	}

	return (s);
}
/**
* my_isalpha - CHecks if char is a character
* @c: character
*
* Return: Bool 1 or 0
*/
int my_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
