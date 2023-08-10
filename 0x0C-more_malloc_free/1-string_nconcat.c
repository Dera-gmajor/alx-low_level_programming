#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of byte
 * Return: pointer to the bew strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int m;
	unsigned int p;
	unsigned int q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = 0;
	while (s1[m] != '\0')
		m++;
	n = 0;
	while (s2[n] != '\0')
		n++;
	if (n > p)
		n = p;
	q = m + n;

	k = malloc(q + 1);
	if (k == NULL)
		return (NULL);

	for (p = 0; p < m; p++)
	{
		k[p] = s1[p];
	}
	for (p = m; p < q; p++)
	{
		k[p] = s2[p - m];
	}
	k[p] = '\0';
	return (k);
}
