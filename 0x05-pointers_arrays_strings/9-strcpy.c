#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string pointed by src to buffer dest, include '\0'
 * @src: pointer to the string
 * @dest: destination pointer
 *
 * Return:string of arbitrary length or EOF if error
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while ((*(src + i)) != 0)
	{
		i++;
	}
	while (j <= i)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
