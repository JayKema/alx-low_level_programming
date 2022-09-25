#include "main.h"
/**
 * print_square - print square of size n
 * @n: square size
 *
 * Returns: Always 0
 */
void print_square(int n)
{
	int i, cnt;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (cnt = 0; cnt < n; cnt++)
		{
			i = 0;
			while (i < n)
			{
				_putchar(95);
				i++;
			}
			_putchar(10);
		}
	}
}
