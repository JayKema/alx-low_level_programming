#include "main.h"
/**
 * leet - map vowel to code
 * @str: pointer to string
 *
 * Return: encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leetChars = "aAeEoOtTlL";
	char *leetCodes = "4433007711";

	while (*ptr != '\0')
	{
		int i = 0;

		while (leetChars[i] != '\0')
		{
			if (*ptr == leetChars[i])
			{
				*ptr = leetCodes[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
