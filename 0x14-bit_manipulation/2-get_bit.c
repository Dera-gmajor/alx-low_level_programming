#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index > 63)
	{
		return (-1);
	}
	a = 1UL << index;
	if (n & a)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
