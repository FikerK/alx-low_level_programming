#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: string to be uppercased
 * Return: uppercased characters
 */

char *string_toupper(char *str)
{
	int a = 0, i;

	while (*(str + a) != 0)
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) -= 32;
		}
	}
	return (str);
}
