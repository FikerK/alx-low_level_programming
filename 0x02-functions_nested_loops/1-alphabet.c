#include "main.h"

/**
 * main - prints the alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alph;
	
	/*this will print a to z*/
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
