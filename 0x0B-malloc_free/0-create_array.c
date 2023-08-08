#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: array size
 * @c: char array
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int e;

	if (size == 0)
		return (NULL);

	d = (char *)malloc(sizeof(char) * size);

	if (d == NULL)
		return (NULL);
	for (e = 0; e < size; e++)
	{
		*(d + e) = c;
	}
	return (d);
}
