#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char pointer
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		int++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
