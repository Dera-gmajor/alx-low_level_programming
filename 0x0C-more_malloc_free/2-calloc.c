#include <stdlib>
#include "main"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of element
 * @size: size of element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int g;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);


	for (g = 0; g < (nmemb * size); g++)
		s[g] = 0;
	return (s);
}
