#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts characters to integers
 * @s: pointer to the string
 *
 * Return:digit of arbitrary length in a string or EOF if error
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 0;
	char temp;
	int sign = 1;
	unsigned int max = 2147483647;
	unsigned int overflow;

	while (s[i] != '\0')
	{
		temp = s[i];
		if (s[i] == '-')
			sign = sign * (-1);
		if (temp >= 48 && temp <= 57)
		{
			if (num > 0)
				num  =  (num * 10) + (int)(temp - '0');
			else
				num  =  (num) + (int)(temp - '0');
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		i++;
	}
	if (num != 0)
	{
		if (num > max)
		{
			overflow = num - max;
			num = num - overflow;
			num = (sign * (signed int)num) + (sign * (signed int)overflow);
			return (num);
		}
		else
			return (sign * (signed int)num);
	}
	else
	{
		return (0);
	}
}
