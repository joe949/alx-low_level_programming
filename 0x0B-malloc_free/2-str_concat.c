#include "main.h"
#include<stdlib.h>
/**
 * str_concat - function that concanates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new memry space that contains s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
	char *strnew;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strnew = malloc(sizeof(char) * (i + j + 1));

	if (strnew == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strnew[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strnew[i] = s2[j];
		i++, j++;
	}
	strnew[i] = '\0';
	return (strnew);
}
