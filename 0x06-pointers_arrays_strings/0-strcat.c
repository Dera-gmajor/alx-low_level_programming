#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: character strings
 * @src: character strings to concatenate to
 * Return: to the dest strings
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int s;

	for (d = 0; dest[d] != '\0'; d++)
		;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[d] = src[s];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
