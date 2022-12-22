/**
* cap_string - Changes string to uppercase
* @s: Array/string
*
* Return: New string
*/
char *cap_string(char *s)
{
	int index = 0;

while (str[++index])
{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
		index++;

	if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}')
		str[index] -= 32;
}
return (str);
}
