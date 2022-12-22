/**
* string_toupper - Changes string to uppercase
* @str: Array/string
*
* Return: New string
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
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
