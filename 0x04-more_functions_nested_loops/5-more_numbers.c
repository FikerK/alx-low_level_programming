#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * comment each line later pls
 *
 * Return: null
 */

void more_numbers(void)
{
	int n, d, e;

	for (n = 1; n <= 10; n++)
	{
		for (d = 0; d < 1; d++)
		{
			for (e = 0; e <= 10; e++)
			{
				if (e == 10)
				{
					d = 1;
					e = 0;
				}
				if (d == 1)
				{
					_putchar(d + '0');
				}
				_putchar(e + '0');
				if (d == 1 && e == 4)
				{
					e = 11;
				}
			}
		}
		_putchar('\n');
	}
}
