#include "main.h"
/**
 * _prime_check - checks if it is a prime number
 * @x: number
 * @y: number to divide with
 * Return: 1 if it is a prime number otherwise 0
 */
int _prime_check(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	if (x / 2 == y)
	{
		return (1);
	}
	return (_prime_check(x, y + 1));
}

/**
 * is_prime_number - checks if it is a prime number
 * @n: int type
 * Return: 1 if it is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	int y = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	return (_prime_check(n, y));
}
