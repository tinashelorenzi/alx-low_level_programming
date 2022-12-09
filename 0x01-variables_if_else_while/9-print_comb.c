#include <stdio.h>
/**
 * main - Tinashe
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char num = '0';

	for (num = '0'; num<= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
		putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
}
