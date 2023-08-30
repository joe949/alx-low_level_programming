#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: input
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s)
	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}
	return (longint);
}
