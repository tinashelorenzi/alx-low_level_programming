#include <stdio.h>
/**
 * main - Tinashe
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
