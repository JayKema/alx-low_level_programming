#include "main.h"
/**
 * reverse_array - reverse array
 * @a: pointer to array
 * @n: number of element in array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i <= ((n - 1) / 2))
	{
		temp = a[n - i - 1];
		*(a + n - i - 1)  = a[i];
		*(a + i) = temp;
		i++;
	}
}
