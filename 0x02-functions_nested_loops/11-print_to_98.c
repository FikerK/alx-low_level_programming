#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: natural number
 */
void print_to_98(int n)
{
	int a = 0;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
		printf("98\n");
	}
	if (n >= 98)
	{
		for (a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}
		printf("98\n");
	}
}
