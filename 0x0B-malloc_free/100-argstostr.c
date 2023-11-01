#include "main.h"
#include<stdlib.h>
/**
 * argstostr - function that concanates all arguments
 * @ac: arguments count
 * @av: array of arguments
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, l;

	if (ac == 0)
		return (NULL);
	for (i = j = 0; i < ac; i++)
	{
		if (av[j] == NULL)
			return (NULL);
		for (k = 0; av[j][k] != '\0'; k++)
			i++;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (j = k = l = 0; l < i; k++, l++)
	{
		if (av[j][k] == '\0')
		{
			str[l] = '\n';
			j++;
			l++;
			k = 0;
		}
		if (l < i - 1)
			str[l] = av[j][k];
	}
	str[l] = '\0';
	return (str);
}
