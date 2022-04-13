#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator
 * Return: pointer to the operator function
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
