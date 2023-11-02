#include "main.h"
#include<stdlib.h>
/**
 * string_nconcat - function that concanates two strings
 * @s1: string
 * @s2: string
 * @n: first number of bytes of s2
 * Return: pointer to allocated memory,
 * if function fails return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;

	unsigned int i, j, s, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	s = i + n;
	newstr = malloc(s + 1);

	if (s == NULL)
		return (NULL);
	for (k = 0; k < s; k++)
		if (k < i)
			newstr[k] = s1[k];
		else
			newstr[k] = s2[k - i];
	newstr[k] = '\0';

	return (newstr);
}
