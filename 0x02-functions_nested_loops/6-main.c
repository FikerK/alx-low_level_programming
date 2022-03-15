#include "main.h"

/**
 * main - check _abs() out
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = _abs(-1);
	_putchar(r + '0');
	r = _abs(2);
	_putchar(r + '0');
	r = _abs(0);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
