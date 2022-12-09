#include <stdio.h>
/**
 * main - Tinashe
 *
 * Return: Always 0
 *
 */
int main(void)
{
  int one_zero;
  int ones;

  for (one_zero = 0; one_zero <= 9; one_zero++)
    {
      for (ones = one_zero + 1; ones <= 9; ones++)
	{
	  putchar(one_zero + '0');
	  putchar(ones + '0');

	  if (one_zero < 8)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');

  return (0);
}
