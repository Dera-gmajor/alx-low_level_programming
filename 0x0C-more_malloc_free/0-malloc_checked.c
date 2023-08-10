#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: int type
 * Return: pointer to the newly allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *y = malloc(b);

	if (y == NULL)
		exit(98);
	return (y);
}
