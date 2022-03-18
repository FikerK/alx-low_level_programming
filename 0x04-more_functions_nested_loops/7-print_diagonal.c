#include "main.h"

/**
 * print_diagonal -draws a diagonal line on the terminal
 * @n: number of times \ is to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if  (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			if (n == 1)
			{
				_putchar('\\');
				a = n + 1;
			}
			else
			{
				for (b = 1; b <= a; b++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
