#include "main.h"

/**
 * free_grid - unction that frees a 2 dimensional grid previously
 *
 * @grid: gride of memorey
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i < height; i++)
		free(grid[i]);
	free(grid);
}
