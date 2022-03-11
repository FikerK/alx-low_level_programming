#include <stdio.h>

/**
 * main - print a-z without e and q
 *
 * Return: 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
	}
	putchar('\n');
	return (0);
}
