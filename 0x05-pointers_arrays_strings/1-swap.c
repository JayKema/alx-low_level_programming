#include "main.h"
/**
 * swap_int - swp the value of two pointers a and b
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
