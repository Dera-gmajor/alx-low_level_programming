#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: array strings
 * @c: character type
 * Return: pointer to the first occurrence of the char c or null
 */
char *_strchr(char *s, char c)
{
	int tmp = 0;

	while (s[tmp] != '\0')
	{
		if (s[tmp] == c)
			return (s + tmp);
		tmp++;
	}
	if (s[tmp] == c)
	{
		return (s + tmp);
	}
	return ('\0');
}
