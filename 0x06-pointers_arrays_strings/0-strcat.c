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
 * _strcat- concatenate two strings
 * @src: pointer to source string
 * @dest: pointer to distination string
 *
 * Description: Append and arbitrary length of charaters to the dest string
 * Return: concatenated string if string is not NULL, otherwhisse EOF
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int i;

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
