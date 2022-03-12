#include <stdio.h>

/**
 * main - print combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c = 0, d = 0, e, f;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					e = 10 * a + b;
					f = 10 * c + d;
					if (e < f)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
					}
					if (e < f && e != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
