#include "main.h"

#define LOW_UP_BOUND 122
#define LOW_LOW_BOUND 97
/**
 * string_toupper: transforms lowercase to uppercase
 * @str: pointer to string
 *
 * Return: modified char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= LOW_LOW_BOUND && str[i] <= LOW_UP_BOUND)
			str[i] = str[i] - 32;
	}
	return (str);
}
