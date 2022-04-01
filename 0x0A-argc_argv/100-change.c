#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, c = 0, cn = 0, m;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	m = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		c = m / coin[i];
		m %= coin[i];
		cn += c;
		if (m == 0)
		{
			printf("%d\n", cn);
			return (0);
		}
	}
	return (0);
}
