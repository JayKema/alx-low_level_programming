#include "main.h"
/**
 * print_triangle - print triangle of size n
 * @n: triangle size
 *
 * Returns: Always 0
 */
void print_triangle(int n)
{
	int i, spc, pnd;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			pnd = i;
			spc = 1; /*print i - 1 spaces b4 diagonal*/
			while (spc < n - pnd)
			{
				_putchar(32);
				spc++;
			}
			while (pnd > 0) /*print pound sign*/
			{
				_putchar(35);
				pnd--;
			}
			_putchar(10);
		}
	}
}
