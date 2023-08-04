#include "main.h"
/**
 * _string_length - calculate length of strings
 * @s: strings
 * Return: length of strings
 */
int _string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _string_length(s + 1));
	}
}

/**
 * _palindrome_check - checks if the strings is palindrome
 * @s: strings
 * @length: length of strings
 * @g: int
 * Return: 1 if a string is a palindrome and 0 if not
 */
int _palindrome_check(char *s, int length, int g)
{
	if (g == length / 2)
	{
		return (1);
	}
	if (s[g] != s[length - 1 - g])
	{
		return (0);
	}
	else
	{
		return (_palindrome_check(s, length, g + 1));
	}
}

/**
 * is_palindrome - checks if a strings is palindrome
 * @s: strings
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int g = 0;
	int length = _string_length(s);

	return (_palindrome_check(s, length, g));
}

