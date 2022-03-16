#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int a = 0;

	a = n % 10;
	if (a < 0)
	{
		a = -1 * a;
	}
	_putchar(a + '0');
	return (a);
}
