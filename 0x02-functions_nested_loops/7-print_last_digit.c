#include "main.h"
/**
 * print_last_digit - print the last digit of an input number
 * @c: digit input
 *
 * Description:print absolute value of digit
 * Return: 1 if successful, 0 otherwise
 */
int print_last_digit(int c)
{
	int val;

	val = c;
	if (val >= 0)
	{
		val = _putchar((val % 10));
		_putchar(val);
	}
	else
	{
		val = _putchar(-1 * (val % 10));
		_putchar(val);
	}
	return (val);
}
