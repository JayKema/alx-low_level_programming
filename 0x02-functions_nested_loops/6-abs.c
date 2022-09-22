#include "main.h"
/**
 * _abs - print absolute value of input integer
 * @c: digit input
 *
 * Description:print absolute value of digit
 * Return: 1 if successful, 0 otherwise
 */
int _abs(int c)
{
	int val;

	val = c;
	if (val == 0)
	{
		_putchar('0');
	}
	else
	{
		if (val > 0)
		{
			_putchar(val);
		}
		else
		{
			_putchar(-1 * val);
		}
	}
	return (0);
}
