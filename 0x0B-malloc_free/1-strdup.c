#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *tmp;
	unsigned int n = 0;
	unsigned int m = 0;

	if (str == NULL)
		return (NULL);
	while (str[m])
		m++;

	tmp = malloc(sizeof(char) * (m + 1));

	if (tmp == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
	{
		tmp[n] = str[n];
	}
	tmp[n] = '\0';
	return (tmp);
}
