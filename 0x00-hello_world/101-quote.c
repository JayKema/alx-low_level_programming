#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints specified text
 * Return: 1 always on Sucess
 */
int main(void)
{
	char mystr[] = "and that piece of art is useful\" \
			- Dora Korpar, 2015-10-19\n";

	write(2, mystr, (unsigned long)sizeof(mystr));
	return (1);
}
