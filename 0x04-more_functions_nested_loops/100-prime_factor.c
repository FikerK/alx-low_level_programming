#include <stdio.h>

/**
 * isprime - checks if a number is prime
 * @n: number to be scrutinized
 * Return: 1 if prime, 0 if not.
 */

int isprime(long int n)
{
	long int i;

	if (n == 0 || n == 1)
		return (0);
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long int i, n = 612852475143, pf = 0;

	for (i = 2; i <= n / 2; i++)
	{
		if (isprime(i) && n % i == 0 && pf < i)
			pf = i;
	}
	printf("%ld\n", pf);
	return (0);
}
