#include "main.h"

/**
 * main - checks print_last_digit()
 *
 * Return: 0
 */
int main(void)
{
	int r;

	print_last_digit(986);
	r = print_last_digit(-51);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
