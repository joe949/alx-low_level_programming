#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - verify if a num is prime or not
 * @n: number to be checked
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates the primarilty of a number
 * @n: number to be checked
 * @x: iterator
 * Return: 1 if n is prime, 0 if not prime
 */

int actual_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}
