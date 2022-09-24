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
 * fib - compute new fibonacci term base on previous, non-base term
 * @base: pseudo-base term, int
 * @value: value of pseudo-base term
 * @prev: value of term preceding pseudo-base term
 * @new: int new fib term to be computed
 *
 * Return: integer value > 0
 */
int fib(int base, int value, int prev, int new)
{
	int result;

	if (base > new)
	{
		return (fibonacci(new));
	}
	else
	{
		if (new == base - 1)
		{
			return (prev);
		}
		else if (new == base)
		{
			return (value);
		}
		else
		{
			result = fib(base, value, prev, new - 1) + fib(base, value, prev, new - 2);
			return (result);
		}
	}
}


/**
 * print_fib_terms - print fibonacci terms
 * @n: int length of fibonacci sequence
 * @seed: int fibonacci term use to compute init fib sequence
 *
 * Return: prints comma delimited fib sequence
 */
void print_fib_terms(int n, int seed)
{
	int val, term, prev;

	if (seed == 0)
		seed = n;
	for (term = 1; term <= seed; term++)
	{
		prev = val;
		val = fibonacci(term);
		if (term == n)
			printf("%d\n", val);
		else
			printf("%d%s%s", val, ",", " ");
	}
	if (n > seed)
	{
		term = seed;
		while (term < n)
		{
			prev = val;
			val = fib(term, val, prev, term + 1);
			term++;
			if (term == n)
				printf("%d\n", val);
			else
				printf("%d%s%s", val, ",", " ");
		}
	}
}
/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	print_fib_terms(50, 30);
	return (0);
}
