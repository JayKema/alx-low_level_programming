#include <stdio.h>
/**
 * fibonacci - prints fibonacci numbers
 * @n:number of terms
 *
 * Return: Always greater than 0
 */
int fibonacci(int n)
{
	if (n == 1)
		return (1);
	else if (n == 2)
		return (2);
	else
		return ((fibonacci(n - 1) + fibonacci(n - 2)));
}
/**
 * sum_even_fib_num - sum the even fib numbers
 * @max:maximum fibonacci number
 *
 * Return: 0 if no even fibonacci term, otherwive > 1
 */
void sum_even_fib_num(int max)
{
	int n, val, sum;

	n = 0;
	while (val < max)
	{
		if (val % 2 == 0)
			sum += val;
		val = fibonacci(n);
		n++;
	}
	printf("%d\n", sum);
}
/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	sum_even_fib_num(4000000);
	return (0);
}
