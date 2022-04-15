#include "variadic_functions.h"
#include <stdio.h>

/**
 * struct print - print type
 * @t: type
 * @f: function
 */

typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

/**
 * print_c - prints a char
 * @c: char to be printed
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints an int
 * @i: int to be printed
 * Return: void
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to be printed
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s: prints a string
 * @s: string to be printed
 * Return: void
 */

void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	print_t p[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list pa;
	char *separator = "";

	va_start(pa, format);
	wile (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(pa);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(pa);
	printf("\n");
}
