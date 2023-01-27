#include "main.h"
int _putchar(char c);
/**
 * puts2 - prints every other char of string starting to  stdout
 * @str: pointer to the string
 *
 * Return:string of arbitrary length or EOF if error
 */
void puts2(char *str)
{
	int cnt = 0;
	int i = 0;

	while ((*(str + cnt)) != '\0')
	{
		cnt++;
	}
	while (i <= cnt - 1)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar(10);
}
