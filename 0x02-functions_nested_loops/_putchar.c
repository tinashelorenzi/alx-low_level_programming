#include <unistd.h>

/**
* main - Tinashe
*
* Return: Always 0
*
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
