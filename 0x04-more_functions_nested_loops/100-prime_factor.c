#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long int i, n = 612852475143, pf = 0;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			pf = i;
			n /= i;
		}
	}
	pf = n;
	printf("%ld\n", pf);
	return (0);
}
