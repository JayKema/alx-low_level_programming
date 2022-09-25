#include "main.h"
/**
 * _isupper - check if c is an uppercase alphabet
 * @c: letter input
 *
 * Description: check if an input is alphabet
 * Return: 1 if c is a uppercase; otherwise 0
 */
int _isupper(int c)
{
	int val;

	val = c;
	if ((val >= 65 && val <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
