#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: function to be used to compare values
 * Return: first index for which cmp doesn't return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			c = cmp(array[i]);
			if (c)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
