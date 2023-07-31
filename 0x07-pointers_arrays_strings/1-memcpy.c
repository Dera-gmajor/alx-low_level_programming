#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: array to copy to
 * @src: array to copy from
 * @n: bytes from memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}
