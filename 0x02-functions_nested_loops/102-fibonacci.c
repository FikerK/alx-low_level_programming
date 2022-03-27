#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0.
 */

int main(void)
{
	int i, fn = 0;

	for (i = 1; i < 50; i++)
	{
		fn += i;
		i += fn;
		if (fn < 50)
			printf("%d", fn);
		if (i < 50)
			printf(", %d", i);
		if (fn + i < 50)
			printf(", ");
		i = i - 1;
	}
	printf("\n");
	return (0);
}
