#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the string created
 */
char *str_concat(char *s1, char *s2)
{
	char *z;
	unsigned int v;
	unsigned int w;
	unsigned int x = 0;
	unsigned int y = 0;

	if (s1)
	{
		while (s1[x])
			x++;
	}
	if (s2)
	{
		while (s2[y])
			y++;
	}
	z = malloc(sizeof(char) * (x + y + 1));
	if (z == NULL)
		return (NULL);
	for (v = 0; v < x; v++)
	{
		z[v] = s1[v];
	}
	for (w = 0; w < y; w++)
	{
		z[v + w] = s2[w];
	}
	z[v + w] = '\0';
	return (z);
}
