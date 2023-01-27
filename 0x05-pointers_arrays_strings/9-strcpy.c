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
	*dest = src;
	return (dest);
}
