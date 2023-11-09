#include "3-calc.h"
/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: firts number
 * @b: second number
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - result of division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of division
 * @a: first number
 * @b: second number
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 100)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
