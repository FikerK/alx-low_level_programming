#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 * in lower case
 *
 */
void print_alphabet_x10(void)
{
	char alphs;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (alphs = 'a'; alphs <= 'z'; alphs++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
