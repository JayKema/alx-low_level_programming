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
		int found = 0;

		while (leetChars[i] != '\0')
		{
			if (*ptr == leetChars[i])
			{
				*ptr = leetCodes[i];
				found = 1;
				break;
			}
			i++;
		}
		if (!found)
			ptr++;
		ptr++;
	}
	return (str);
}
