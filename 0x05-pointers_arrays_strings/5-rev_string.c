#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: pointer to the string
 *
 * Return:string of arbitrary length in reverse order or EOF if error
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int temp;
	
	while ((*(s + i)) != 0)
	{
		i++;
	}

	i = i - 1;
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
