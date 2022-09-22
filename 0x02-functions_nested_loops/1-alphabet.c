#include <main.h>
/**
 * main - entry point
 *
 * Description: prints alphabets in lower case
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
	return;
}
