#include "main.h"

/**
 * print_binary - binary representation of a number
 * @n: number to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	temp = n;
	i = 0;
	while ((temp >>= 1) > 0)
		i++;
	while (i >= 0)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
