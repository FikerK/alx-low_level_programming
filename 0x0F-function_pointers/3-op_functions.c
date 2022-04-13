#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first number
 * @b: second number
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract a and b
 * @a: 1st num
 * @b: 2nd num
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples a and b
 * @a: 1st num
 * @b: 2nd num
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: 1st num
 * @b: 2nd num
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of b
 * @a: 1st num
 * @b: 2nd num
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
