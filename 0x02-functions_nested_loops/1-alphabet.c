#include "main.h"

/*
 * print_alphabet - prints the alphabet in small letters
 * @c: _putchar characters
 * calls _putchar for displaying each character at a time
 *
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
