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

	if (n < 0)
	{
		n = -1 * n;
	}
	a = n % 10;
	n = 0;
	_putchar('0' + a);
	return (a);
}
