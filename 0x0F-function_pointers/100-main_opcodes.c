#include <stdlib.h>
#include <stdio.h>

/**
 * opcodes - print opcode of it's own main function
 * @a: address
 * @s: number of bytes
 * Return: void
 */

void opcodes (char *a, int s)
{
	int i;

	for (i = 0; i < s; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < s - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	s = atoi(argv[1]);
	if (s < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes((char *)&main, s);
	return (0);
}
