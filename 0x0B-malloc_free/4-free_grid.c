#include "main.h"
#include<stdio.h>
#include<stdlibh>
/**
 * free_grid - free 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
