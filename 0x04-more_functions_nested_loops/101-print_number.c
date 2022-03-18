#include "main.h"

/**
 * print_number - prints an integer
 * @n: int to be printed
 */

void print_number(int n)
{
	int a = 1, b, c = 1, m;

	m = n;
	while (m >= 10)
	{
		m = m / 10;
		a++;
		c = 10 * c;
	}
	m = n;
	for (b = a; b > 0; b--)
	{
		_putchar((m / c) + '0');
		m = m % c;
		c = c / 10;
	}

}
