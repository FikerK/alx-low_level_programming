#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int n, m, o = 0;

	if (size > 0)
	{
		for (n = size; n > 0; n--)
		{
			for (m = n; m > 1; m--)
			{
				_putchar(' ');
			}
			o = n;
			while (o <= size)
			{
				_putchar('#');
				o++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
