#include "main.h"

/*
 * print_alphabet() - prints the alphabet in small letters
 *
 * uses _putchar
 */
/*print_alphabet*/
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
