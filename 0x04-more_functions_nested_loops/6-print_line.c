#include "main.h"
/**
 * print_line - print line of size n
 * @n: line size
 *
 * Returns: Always 0
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar(10);
	}
}
