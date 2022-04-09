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
 * mul - multiplies two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @s1: size of n1
 * @s2: size of n2
 * @s: s1 + s2
 * Return: nothing
 */

int *mul(char *n1, char *n2, int s1, int s2, int s)
{
	int *mult;
	int i, n, m, x, y, r = 0, r1 = 0, ms, sm = 0, a = 0;

	ms = s;
	mult = malloc(sizeof(int) * s);
	if (mult == NULL)
		return (0);
	for (i = 0; i < s; i++)
		mult[i] = 0;
	for (n = s2 - 1; n >= 0; n--)
	{
		for (m = s1 - 1; m >= 0; m--)
		{
			x = (n2[n] - '0') * (n1[m] - '0');
			y = x % 10;
			if ((y + r + mult[ms - 1]) >= 10)
			{
				a = (y + r + mult[ms - 1]) / 10;
				mult[ms - 1] = (y + r + r1 + mult[ms - 1]) % 10;
				r1 = a;
			}
			else
			{
				mult[ms - 1] = y + r + r1 + mult[ms - 1];
				r1 = 0;
			}
			r = x / 10;
			if (m == 0)
				mult[ms - 2] = r + r1;
			ms--;
		}
		r = 0;
		r1 = 0;
		sm++;
		ms = s - sm;
	}
	return (mult);
}
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, s1 = 0, s2 = 0;
	char e[] = "Error\n";
	char *n1;
	char *n2;
	int *result;

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
	n1 = malloc(sizeof(char) * (s1 + 1));
	n2 = malloc(sizeof(char) * (s2 + 1));
	if (n1 == 0 || n2 == 0)
		return (0);
	for (i = 0; i <= s1; i++)
		n1[i] = argv[1][i];
	for (j = 0; j <= s2; j++)
		n2[j] = argv[2][j];
	result = mul(n1, n2, s1, s2, s1 + s2);
	if (result[0] == 0)
	{
		for (i = 1; i < s1 + s2; i++)
			_putchar(result[i] + '0');
	}
	else
	{
		for (i = 0; i < s1 + s2; i++)
			_putchar(result[i] + '0');
	}
	_putchar('\n');
	free(result);
	return (0);
}
