#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: array
 * @b: constant byte
 * @n: bytes of the memory area pointed to
 * Return: pointer to the memory area 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}
	return (s);
}
