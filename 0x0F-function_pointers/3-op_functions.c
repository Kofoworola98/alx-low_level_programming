#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This returns the sum of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This returns the difference of two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This returns the product of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This returns the division of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This returns the remainder of the division of two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
