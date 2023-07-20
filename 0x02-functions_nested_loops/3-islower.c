#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: char type
 * Return: Returns 1 if c is lowercase,if not 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
