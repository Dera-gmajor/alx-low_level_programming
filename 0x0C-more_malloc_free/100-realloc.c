#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to the newly allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);

	else if (new_size != old_size)
	{
		void *new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		char *old_ptr = ptr;
		char *new_ptr_char = new_ptr;

		for (unsigned int i = 0; i < old_size; i++)
			new_ptr_char[i] = old_ptr[i];

	free(ptr);
	ptr = new_ptr;
	}
	return (ptr);
}
