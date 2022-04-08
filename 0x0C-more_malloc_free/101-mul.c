#include "main.h"
#include <stdlib.h>

/**
 * _is_digit - checkes if numbers are only digit
 * @n: pointer to be checked for legit_digit
 * Return: 0 if digit, 1 if not
 */

int _is_digit(char **n)
{
	int i, j;

	for (i = 1; i <= 2; i++)
	{
		for (j = 0; n[i][j]; j++)
		{
			if (n[i][j] < '0' || n[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, s1 = 0, s2 = 0;
	char e[] = "Error\n"

	if (argc != 3 || _is_digit(argv))
	{
		for (i = 0; e[i]; i++)
			_putchar(e[i]);
		exit(98);
	}
	while (argv[1][s1])
		s1++;
	while (argv[2][s2])
		s2++;

}
