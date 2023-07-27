#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @d: pointer
 * Return: to pointer
 */
char *cap_string(char *d)
{
	int a;
	int b = 1;

	for (a = 0; d[a] != '\0'; a++)
	{
		if (b && d[a] >= 'a' && d[a] <= 'z')
		{
			d[a] = d[a] - ('a' - 'A');
		}
		if
			(d[a] == ' ' || d[a] == '\t' || d[a] == '\n' ||
			 d[a] == ',' || d[a] == ';' || d[a] == '.' ||
			 d[a] == '!' || d[a] == '?' || d[a] == '(' ||
			 d[a] == ')' || d[a] == '{' || d[a] == '}')
			{
				b = 1;
			}
		else
		{
			b = 0;
		}
	}
	return (d);
}
