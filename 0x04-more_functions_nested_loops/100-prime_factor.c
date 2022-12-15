#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number given
*
*Return: returns 0
*/
int main(void)
{
	long a = 612852475143;
	int include1;

	while (include1++ < a / 2)
	{
		if (a % include1 == 0)
		{
			a /= 2;
			continue;
		}

		for (include1 = 3; include1 < a / 2; include1 += 2)
		{
			if (a % include1 == 0)
			a /= include1;

		}
	}
	printf("%ld\n", a);
	return (0);
	}
