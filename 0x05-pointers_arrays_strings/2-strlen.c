#include "main"
/**
 * _strlen - returns the length of a string.
 * @s: strings pointer
 * Return: length ofthe strings
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
