#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms of the Fibonacci sequence
 * which do not exceed 4000000
 * Return: 0.
 */

int main(void)
{
	int i, fn;
	long sum = 0;

	for (i = 1; i <= 4000000; i++)
	{
		fn += i;
		i += fn;
		printf("%d ", i);
		if (fn % 2 == 0)
			sum += fn;
		if (i % 2 == 0)
			sum += i;
		i = i - 1;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
