#include "3-calc.h"

/**
 * op_add - calculates the sum of 2 numbers
 * @a: 1st number
 * @b: second number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between 2 numbers
 * @a: 1st number
 * @b: second number
 * Return: the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of 2 numbers
 * @a: 1st number
 * @b: 2econd number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - calculates the divison of 2 numbers
 * @a: 1st number
 * @b: second number
 * Return: the result of division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
