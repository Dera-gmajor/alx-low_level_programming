#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: array strings
 * @c: character type
 * Return: pointer to the first occurrence of the char c or null
 */
char *_strchr(char *s, char c)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == c)
		{
			return (s + y);
		}
	}
	return ('\0');
}
