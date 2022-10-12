#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - calculates sum of two integers
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the subtraction of two integers
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 *
 * Return: subtracion of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gets the product of two integers
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gets the divion of two integers
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder of the dicision of two integers
 * @a: first integer to be calculated
 * @b: second integer to be calculated
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
