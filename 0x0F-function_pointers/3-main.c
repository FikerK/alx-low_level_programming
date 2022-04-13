#include "3-calc.h"
#include <string.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: argumnet vectors
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	int (*f)(int, int);
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	o = argv[2];
	if ((strcmp(o, "/") == 0 || strcmp(o, "%") == 0) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error");
		exit(99);
	}
	result = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
