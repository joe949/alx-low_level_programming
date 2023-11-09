#include "function_pointers.h"
/**
 * array_iterator - function that iterates an array
 * @array: pointer to array of integers
 * @size: size of array
 * @action: pointer to function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
