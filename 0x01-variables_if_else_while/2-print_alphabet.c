#include <stdio.h>

/**
 * main - print a-z using putchar
 *
 * Return: 0
 */
int main(void)
{
	char az;

	for(az = 'a' ; az <= 'z' ; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
