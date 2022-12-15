/**
*more_numbers - prints numbers to 14
* 10 times
*
*Return: returns nothing
*/
void more_numbers(void)
{
	int n = 0;
	int count = 0;

	while (count <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		count++;
	}
	_putchar(10);
}
