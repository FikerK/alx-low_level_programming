#include <unistd.h>
#include "main.h"

/**
 * main - Program that prints '_putchar'
 *
 * Return: 0
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
