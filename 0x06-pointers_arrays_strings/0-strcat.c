#include <main.h>
#include <string.h>
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
	size_t dest_len = strlen(dest);
	size_t src_len = strlen(dest);
	long unsigned int i;

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
