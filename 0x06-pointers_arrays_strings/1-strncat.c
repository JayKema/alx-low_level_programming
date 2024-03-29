#include "main.h"
/**
 * _strlen- determine the length of a string
 * @str: pointer to input string
 *
 * Return: Int > 1 if string input is not NuLL. Otherwise, 0
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strncat- concatenate arbitrary char from str to another
 * @src: pointer to source string
 * @dest: pointer to distination string
 * @n: max number of char to append to dest str
 *
 * Description: Append and arbitrary length of charaters to the dest string
 * Return: concatenated string if string is not NULL, otherwhisse EOF
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n &&  src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
