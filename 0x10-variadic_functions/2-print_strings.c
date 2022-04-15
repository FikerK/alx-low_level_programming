#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings -  prints strings
 * @separator: string to be prnted between strings
 * @n: number of strings to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ps;

	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ps, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ps);
}
