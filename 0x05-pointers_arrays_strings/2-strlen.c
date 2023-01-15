#include <stdio.h>
/**
 * _strlen - evaluates the lent of string
 * @s: pointer to the string
 *
 * Return:length of string if > 1 or EOF if error
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (1)
	{
		if ((*(s + counter)) == '\0')
			return (counter);
		counter++;
	}
}
