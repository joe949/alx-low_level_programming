#include "variadic_functions.h"
/**
 * sum_them_all - function that returns sum of its parameters
 * @n: number of parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
