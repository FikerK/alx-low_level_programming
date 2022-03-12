#include <stdio.h>

/**
 * main - Print different combination of tree digit ascending numbers
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
			for (c = 2; c < 10; c++)
			{
				if (a != b && b != c && a != c && a < b && b < c && a < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					/*last num doesn't need a comma*/
					if ((100 * a + 10 * b + c) != 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
