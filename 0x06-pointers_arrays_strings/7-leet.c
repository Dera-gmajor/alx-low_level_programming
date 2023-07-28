#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @y: pointer
 * Return: y
 */
char *leet(char *y)
{
	int u;
	int v;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (u = 0; y[u] != '\0'; u++)
	{
		for (v = 0; v < 10; v++)
		{
			if (y[u] == letters[v])
			{
				y[u] = numbers[v];
			}
		}
	}
	return (y);
}
