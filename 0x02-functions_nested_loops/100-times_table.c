#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: the n times
 * Return: times table
 */
void print_times_table(int n)
{
	int i, j, mult = 0, s, p, a = 1, c = 1;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				while (mult >= 10)
				{
					mult /= 10;
					a++;
					c *= 10;
				}
				mult = i * j;
				for (s = a; s < 4 && j != 0; s++)
				{
					_putchar(' ');
				}
				for (p = a; p > 0; p--)
				{
					_putchar((mult / c) + '0');
					mult = mult % c;
					c /= 10;
				}
				if (j < n)
				{
					_putchar(',');
				}
				if (j == n)
				{
					_putchar('\n');
				}
				c = 1;
				a = 1;
			}
		}
	}
}
