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
 * print_fib_terms - print fibonacci terms
 * @n: int length of fibonacci sequence
 *
 * Return: prints comma delimited fib sequence
 */
void print_fib_terms(int n)
{
	int val, term;

	for (term = 1; term <= n; term++)
	{
		val = fibonacci(term);
		if (term == n)
			printf("%d\n", val);
		else
			printf("%d%s%s", val, ",", " ");
	}
}
/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	print_fib_terms(50);
	return (0);
}
