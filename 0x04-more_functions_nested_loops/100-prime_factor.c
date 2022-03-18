#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long int a, b = 0, i, j = 0, k, m = 0;
	long int n = 612852475143, pn;

	m = n;
	/*check if n is prime*/
	for (k = 2; k <= n / 2; k++)
	{
		if (n % k == 0)
		{
			pn = 0;
		}
		else
		{
			pn = n;
			a = n + 1;
		}
	}
	for (a = 2; a <= m; a++)
	{
		if (m % a == 0)
		{
			for (i = 2; i <= (a / 2); i++)
			{
				if (a % i == 0)
				{
					i = a;
					j = 1;
				}
				else
					j = 0;
			}
			if (j == 0)
			{
				b = a;
				m = m / a;
				a = 2;
			}
			if (pn < b)
			{
				pn = b;
			}
		}
	}
	printf("%ld\n", pn);
	return (0);
}
