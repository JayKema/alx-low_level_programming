#include "main.h"
int _putchar(char c);
/**
 * _puts - prints string to stdout
 * @str: pointer to the string
 *
 * Return:string of arbitrary length or EOF if error
 */
void _puts(char *str)
{
	int counter;

	counter = 0;
	while ((*(str + counter)) != '\0')
	{
		_putchar((*(str + counter)));
		counter++;
	}
	_putchar(10);
}
