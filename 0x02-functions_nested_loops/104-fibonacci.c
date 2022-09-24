#include <stdio.h>
/**
 * print_fib_terms - print fibonacci terms
 * @n: unsigned long long length of fibonacci sequence
 *
 * Return: prints comma delimited fib sequence
 */
void print_fib_terms(double n)
{
	double t, t1, t2, tn;

	t1 = 1;
	t2 = 2;
	tn = t1 + t2;
	for (t = 1; t <= 2; t++)
	{
		if (t == n)
			printf("%.0lf\n", t);
		else
			printf("%.0lf%s%s", t, ",", " ");
	}
	if (n > 2)
	{
		for (t = 3; t <= n; t++)
		{
			if (t == n)
				printf("%.0lf\n", tn);
			else
				printf("%.0lf%s%s", tn, ",", " ");
			t1 = t2;
			t2 = tn;
			tn = t1 + t2;
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
	print_fib_terms(98);
	return (0);
}
