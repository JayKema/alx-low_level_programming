#include "main.h"
int _putchar(char c);
/**
 * puts_half - prints 2nd half of a string
 * @str: pointer to the string
 *
 * Return:string of arbitrary length or EOF if error
 */
void puts_half(char *str)
{
	int len = 0;
	int n = 0;

	while ((*(str + len)) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
