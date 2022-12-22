#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	for (int i = 0; i < size; i += 16)
	{
		printf("%08x: ", i);
		for (int j = 0; j < 16; j++)
		{
			if (i + j < size)
			{
				printf("%.2x", b[i + j]);
			}
			else
			{
				printf("  ");
			}

			if (j % 2 == 0 && j != 0)
			{
				printf(" ");
			}
		}

		printf(" ");
		for (int j = 0; j < 16; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] <= 31 || b[i + j] >= '~')
				{
					putchar('.');
				}
				else
				{
					putchar(b[i + j]);
				}
			}
		}
		printf("\n");
	}
}
