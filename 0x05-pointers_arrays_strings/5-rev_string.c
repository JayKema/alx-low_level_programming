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
	int cnt;
	int j;
	int temp;
	int len;
	
	while ((*(s + cnt)) != '\0')
	{
		cnt++;
	}

	len = cnt;
	cnt = 0;
	j = len - 1;
	while (cnt <  j)
	{
		temp = s[cnt];
		s[cnt] = s[j];
		s[j] = temp;
		cnt++;
		j--;
	}
}
