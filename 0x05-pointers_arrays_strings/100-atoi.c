#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: strings to be converted
 * Return: converted integer
 */
int _atoi(char *s)
{
	int num1 = 1;
	unsigned int num2 = 0;

	do {
		if (*s == '-')
		{
			num1 *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num2 = (num2 * 10) + (*s - '0');
		}
		else if (num2 > 0)
		{
			break;
		}
		s++;
	}
	while (*s != '\0');
	return (num2 * num1);
}
