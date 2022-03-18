#include <stdio.h>

/**
 * main - prints 1-100.But with Fizz for multiples of 3
 * Buzz for multiples of 5 and FizzBuzz for both
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}
		else if (n % 3 != 0 && n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
		if (n == 100)
		{
			printf("\n");
		}
	}
	return (0);
}
