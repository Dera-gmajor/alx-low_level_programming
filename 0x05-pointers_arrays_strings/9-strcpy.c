#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to string to copy to
 * @src: pointer to string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int y;
	y = 0;

	while (src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
