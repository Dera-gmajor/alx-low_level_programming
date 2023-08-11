#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly allocated memory
 */
int *array_range(int min, int max)
{
	int *h;
	int j;

	if (min > max)
		return (NULL);
	h = malloc(sizeof(*h) * ((max - min) + 1));
	if (h == NULL)
		return (NULL);

	j = 0;
	for (int i = min; i <= max; i++, j++)
		h[j] = i;
	return (h);
