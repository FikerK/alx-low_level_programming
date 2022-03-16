#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: table
 */
void times_table(void)
{
	int m, n, o, a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = a * b;
			n = m % 10;
			o = m / 10;
			if (o != 0)
			{
				_putchar(o + '0');
			}
			if (o == 0 && b != 0)
			{
				_putchar(' ');
			}
			_putchar(n + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
