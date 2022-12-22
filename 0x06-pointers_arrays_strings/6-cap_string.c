/**
* string_toupper - Changes string to uppercase
* @str: Array/string
*
* Return: New string
*/
char *cap_string(char *s)
{
	int is_prev_space = 1;  // Flag to track if previous character was a space
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_prev_space && my_islower(s[i]))
		{
			s[i] = string_toupper(s[i]);
		}
		is_prev_space = my_isspace(s[i]);
	}
}
/**
* string_toupper - Changes string to uppercase
* @str: Array/string
*
* Return: New string
*/
char string_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - 'a' + 'A');
    }
    return c;
}
/**
* my_islower - Checks lowercase
* @str: Array/string
*
* Return: New string
*/
int my_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
/**
* my_isspace - Checks lowercase
* @str: Array/string
*
* Return: New string
*/
int my_isspace(int c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}
