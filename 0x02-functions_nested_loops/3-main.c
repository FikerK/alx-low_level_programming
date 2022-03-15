#include "main.h"

/**
 * main - calls _islower to check lowercaseness
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('h');
	_putchar(r + '0');
	return (0);
}
