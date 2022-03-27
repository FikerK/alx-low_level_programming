#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0.
 */

int main(void)
{
	int i;
	unsigned long fn = 0, n = 1;

	for (i = 0; i < 49; i++)
	{
		fn += n;
		n += fn;
		printf("%lu, %lu", fn, n);
		if (i < 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
