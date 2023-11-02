#include "main.h"
#include<stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: pointer to array created
 * if min > max, return NULL
 * if maloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
