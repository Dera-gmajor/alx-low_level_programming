#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int width
 * @height: int height
 * Return: pointer to new matrix
 */
int **alloc_grid(int width, int height)
{
	int **tmp;
	int y;
	int z;

	if (width < 1 || height < 1)
		return (NULL);
	tmp = malloc(height * sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		tmp[y] = malloc(width * sizeof(**tmp));
		if (tmp[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(tmp[y]);
			free(tmp);
			return (NULL);
		}
		for (z = 0; z < width; z++)
			tmp[y][z] = 0;
	}
	return (tmp);
}
