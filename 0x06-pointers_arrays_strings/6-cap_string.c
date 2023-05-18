#include "main.h"
/**
 * cap_string - Captalize each word in a string
 * @str: pointer to string
 *
 * Return: string with each word captalized
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (capitalize && (str[i] >= 'a' &&  str[i] <= 'z'))
			str[i] -= 32;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
