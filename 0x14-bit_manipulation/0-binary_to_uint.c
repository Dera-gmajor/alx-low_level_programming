#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int c;

	if (b == NULL)
		return (0);

	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		a = a * 2 + (b[c] - '0');
	}
	return (a);
}
