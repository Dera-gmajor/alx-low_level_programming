#include "main.h"
/**
 * rot13 - encodes a string using rot13.
* @r: strings
* Return: strings to be encoded
*/
char *rot13(char *r)
{
	int x, z;

	char f[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char g[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; r[x] != '\0'; x++)
	{
		for (z = 0; f[z] != '\0'; z++)
		{
			if (r[x] == f[z])
			{
				r[x] = g[z];
				break;
			}
		}
	}
	return (r);
}

