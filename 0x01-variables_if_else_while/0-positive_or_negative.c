#include <stdio.h>
#include <stdlib.h>
/**
 * pos_or_neg - Prints sign of integer
 * @parameter: int n
 *
 * Description: Prints positive, negative, or zero\
 * depending on the sign of the int
 * Return: int is positive if int is positive
 */

int pos_or_neg(int n)
{
	int i;
	i = n;

	if (i == 0)
	{
		printf("%d is zero", i)
	}
	else
	{
		if (i > 0)
		{
			printf("%d is positive", i)
		}
		else 
		{
			printf("%d if negative", i)	
		}
	}
	return (0)
}
