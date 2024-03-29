#include "main.h"
int _putchar(char c);
/**
 * print_rev - prints string in reverse to stdout
 * @s: pointer to the string
 *
 * Return:string of arbitrary length or EOF if error
 */
void print_rev(char *s)
{
	int counter = 0;

	while ((*(s + counter)) != '\0')
	{
		counter++;
	}
	while (counter > 0)
	{
		counter--;
		_putchar(s[counter]);
	}
	_putchar('\n');
}
