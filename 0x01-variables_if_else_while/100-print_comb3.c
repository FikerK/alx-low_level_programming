#include <stdio.h>

/**
 * main - Print different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			c = 10 * a + b;
			if (a != b && a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				/*last num 89 doesn't need comma*/
				if (c != 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
