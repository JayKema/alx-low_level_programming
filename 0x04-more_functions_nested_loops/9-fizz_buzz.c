#include <stdio.h>
/**
 * fizz_buzz - fizz buzz funtion
 *
 * Description: prints numbers 1 to 100 followed by a new line
 * prints Fizz if number is multiple of three
 * prints Buzz if number is multiple of five
 * prints FizzBuzz if number is multiple of three and five
 * otherwise, prints number
 * Return: Always greater than 0
 */
void fizz_buzz(void)
{
	int i = 1;

	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			if (i == 1)
				printf("%d", i);
			else
				printf(" %d", i);
		i++;
	}
	printf("\n");
}
/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
