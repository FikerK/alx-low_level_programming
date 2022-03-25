#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: nothing.
 */

void print_number(int n)
{
	int a = 0, b = 0, c = 1, i;

	a = n;
	if (a < 0)
	{
		a = a * -1;
		_putchar('-');
	}
	while (a >= 10)
	{
		a /= 10;
		b++;
		c *= 10;
	}
	a = n;
	if (a < 0)
		a *= -1;
	for (i = 0; i <= b; i++)
	{
		_putchar((a / c) + '0');
		a %= c;
		c /= 10;
	}
}
