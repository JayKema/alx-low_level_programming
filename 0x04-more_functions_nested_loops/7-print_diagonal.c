#include "main.h"
/**
 * print_diagonal - print line of size n
 * @n: line size
 *
 * Returns: Always 0
 */
void print_diagonal(int n)
{
	int i, spc;

	i = 0;
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			spc = 1 /*print i - 1 spaces b4 diagonal*/
			while (spc < i - 1)
			{
				_putchar(32);
				spc++;
			}
			_putchar(92);
		}
		_putchar(10);
	}
}
