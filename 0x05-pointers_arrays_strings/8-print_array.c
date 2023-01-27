#include <stdio.h>
/**
 * print_array - prints 2nd half of a string
 * @a: array of literals
 * @n: number of elements of array to be printed
 *
 * Return:string of arbitrary length or EOF if error
 */
void print_array(int *a, int n)
{
	int i = 0;

	if n > 0
		n = n - 1;
	while (i <= n)
	{
		printf("%d", a[i]);
		if (i < n)
		{
			printf("%c", 44);
			printf("%c", 32);
		}
		else
		{
			printf("%c", 10);
		}
		i++;
	}
}
