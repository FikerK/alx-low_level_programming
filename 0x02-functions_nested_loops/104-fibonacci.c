#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0.
 */

int main(void)
{
	int i;
	long fn, n;

	for (i = 0; i < 49; i++)
	{
		fn += n;
		n += fn;
		printf("%ld, %ld", fn, n);
		if (i < 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
