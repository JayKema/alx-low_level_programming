#include <stdio.h>
/**
 * print_fib_terms - print fibonacci terms
 * @n: int length of fibonacci sequence
 *
 * Return: prints comma delimited fib sequence
 */
void print_fib_terms(int n)
{
	int t, overflow;
	unsigned long t1, t2;
	long t1_head, t1_tail, t2_head, t2_tail, tn_tail, tn_head;

	t1 = 1;
	t2 = 2;
	if (n > 2)
	{
		printf("%d, %d, ", 1, 2);
		t1_head = t1 / 1000000000;
		t1_tail = t1 % 1000000000;
		t2_head = t2 / 1000000000;
		t2_tail = t2 % 1000000000;
		for (t = 3; t <= n; t++)
		{
			overflow = (t1_tail + t2_tail) / 1000000000;
			tn_tail = (t1_tail + t2_tail) % 1000000000;
			tn_head = (t1_head + t2_head) + overflow;
			if (tn_head == 0)
			{
				tn_tail = tn_tail + (1000000000 * overflow);
				if (t == n)
					printf("%ld\n", tn_tail);
				else
					printf("%ld%s%s", tn_tail, ",", " ");
			}
			else
			{
				if (t == n)
					printf("%ld%09ld\n", tn_head, tn_tail);
				else
					printf("%ld%09ld%s%s", tn_head, tn_tail, ",", " ");
			}
			t1_head = t2_head;
			t1_tail = t2_tail;
			t2_head = tn_head;
			t2_tail = tn_tail;
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
