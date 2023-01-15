#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: pointer to the string
 *
 * Return:string of arbitrary length in reverse order or EOF if error
 */
void rev_string(char *s)
{
	char *a;

	while ((*a++ = *s++))
		;
	printf("a is %ld\n", sizeof(a));
	printf("s is %ld\n", sizeof(s));
}
