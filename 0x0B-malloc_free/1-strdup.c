#include "main.h"
#include<stdlib.h>
/**
 * _strdup - function that returns a pointer to a new string duplicate of str
 * @str: string
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *strnew;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	strnew = malloc(sizeof(char) * (i + 1));

	if (strnew == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strnew[j] = str[j];
	return (strnew);
}
