#include <stdio.h>
/**
 * natural - computes the sum of multiples of 3 or 5
 *
 * Return: Always greater than 0
 */
void natural(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
}
