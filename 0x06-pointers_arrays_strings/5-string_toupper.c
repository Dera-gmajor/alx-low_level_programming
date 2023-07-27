#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @g: pointer
 * Return: g
 */
char *string_toupper(char *g)
{
	int f;
	
	for (f = 0; g[f] != '\0'; f++)
	{
		if (g[f] >= 'a' && g[f] <= 'z')
		{
			g[f] = g[f] - 32;
		}
	}
	return (g);
}
