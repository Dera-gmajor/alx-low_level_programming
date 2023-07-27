#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: character strings
 * @src: character strings
 * @n: number of byte
 * Return: dest strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];
	for (; n > m; m++)
		dest[m] = '\0';
	return (dest);
}
