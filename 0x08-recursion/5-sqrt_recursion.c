#include "main.h"

int actual_sqrt_recursion(int n, int x);
/**
 * _sqrt_recursion - function that finds natural sqrt of a num
 * @n: num to find sqrt for
 * Return: sqrt of num
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find natural sqrt of num
 * @n: num to find sqrt for
 * @x: iterator
 * Return: actual sqrt of num
 */
int actual_sqrt_recursion(int n, int x)
{
	if (x*x > n)
		return (-1);
	if (x*x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
