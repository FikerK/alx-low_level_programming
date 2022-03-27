#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: the n times
 * Return: times table
 */
void print_times_table(int n)
{
	int i, j, mult = 0;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				if (j == 0)
				{
					_putchar(0 + '0');
				}
				if (mult < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				if (mult >= 10 && mult < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (mult >= 100)
				{
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar(((mult % 100) % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
				}
				if (j == n)
				{
					_putchar('\n');
				}
			}
		}
	}
}
