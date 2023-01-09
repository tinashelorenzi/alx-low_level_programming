#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numers
*@argc: number of arguments
*@argv: array of ints to multiply
*Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		int ans, a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		ans = a * b;
		printf("%d", ans);
		return (0);
	}
}
