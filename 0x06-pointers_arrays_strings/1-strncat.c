#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: character strings
 * @src: character strings
 * @n: numberbog bite to concatenate
 * Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	for (s = 0; s < n && src[s] != '\0'; s++, d++)
	{
		dest[d] = src[s];
	}
	dest[d] = '\0';
	return (dest);
}
