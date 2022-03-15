#include "main.h"

/**
 * main - runs _isalpha
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = _isalpha('1');
	_putchar(r + '0');
	r = _isalpha('a');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
