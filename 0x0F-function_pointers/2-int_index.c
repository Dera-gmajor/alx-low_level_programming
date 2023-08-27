#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array
 * @size: size of the array
 * @cmp: function pointer
 * Return: the index of the first element for which the
 * cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (!(array == NULL || cmp == NULL))
	{
		for (y = 0; y < size; y++)
		{
			if (cmp(array[y]))
				return (y);
		}
	}
	return (-1);
}
