#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0.
 */

int main(void)
{
	int i;
	long fn = 0, n = 1;

	for (i = 0; i < 25; i++)
	{
		fn += n;
		n += fn;
		printf("%ld, %ld", fn, n);
		if (i < 24)
			printf(", ");
	}
	printf("\n");
	return (0);
}
