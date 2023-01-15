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
	int counter;
	int lst;

	counter = 0;
	while (1)
	{
		if ((*(s + counter)) == '\0')
			break;
		counter++;
	}
	lst = counter + 1;
	while (counter >= 0)
	{
		_putchar((*(s + counter)));
		counter--;
	}
	_putchar((*(s + lst)));
}
