#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: char array
 * @accept: bytes accepted
 * Return: Returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int f = 0;
	int g = 0;
	int count = 0;

	while (s[f] != '\0')
	{
		g = 0;

	while (accept[g] != '\0')
	{
		if (s[f] == accept[g])
		{
			count++;
			break;
		}
		g++;
	}
	if (accept[g] == '\0')
		break;
	f++;
	}
	return (count);
}
