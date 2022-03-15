#include "main.h"

/**
 * main - check sign of nums
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = print_sign(-2);
	_putchar(r + '0');
	r = print_sign(0);
	_putchar(r + '0');
	r = print_sign(2);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
