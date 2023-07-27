#include "main.h"
/**
 * _strcmp - compares two strings.
 *  @s1: string 1
 *  @s2: string 2
 *  Return: 0 if s1 == s2, positive if s1 > s2, negative if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int y;

	y = 0;
	while (s1[y] == s2[y] && s1[y] != '\0')
	{
		y++;
	}
	return (s1[y] - s2[y]);
}
