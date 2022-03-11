#include <stdio.h>

/**
 * main - print all base 16 lowercased numers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (n = 10; n < 16; n++)
	{
		char m = n + 87;

		putchar(m);
	}
	putchar('\n');
	return (0);
}
