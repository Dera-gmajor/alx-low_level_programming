#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *tmp_haystack;
	char *tmp_needle;

	while (*haystack != '\0')
	{
		tmp_haystack = haystack;
		tmp_needle = needle;

		while (*haystack != '\0' && *tmp_needle != '\0' && *haystack == *tmp_needle)
		{
			haystack++;
			tmp_needle++;
		}
		if (!*tmp_needle)
			return (tmp_haystack);
		haystack = tmp_haystack + 1;
	}
	return (0);
}
