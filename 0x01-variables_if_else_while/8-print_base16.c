#include <stdio.h>
/**
 * main - Tinashe
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char begin = '0';
	char letr = 'a';

	for (begin = '0'; begin <= '9'; begin++)
	{
		putchar(begin);
	}
	for (letr = 'a'; letr <= 'f'; letr++)
	{
		putchar(letr);
	}
	putchar('\n');
	return (0);
}
