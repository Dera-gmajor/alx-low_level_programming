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
	unsigned int r;

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

	for (r = 0; r < m; r++)
	{
		k[r] = s1[r];
	}
	for (r = m; r < q; r++)
	{
		k[r] = s2[r - m];
	}
	k[r] = '\0';
	return (k);
}
