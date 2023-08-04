#include "main.h"
/**
 * _sqrt_scan - returns the natural square root of a number.
 * @b: number to determine if it id a sqr root
 * @c: root to use
 * Return: -1 If n does not have a natural square root
 */
int _sqrt_scan(int b, int c)
{
	if (b == c * c)
	{
		return (c);
	}
	else if (c < b)
	{
		return (_sqrt_scan(b, c + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int type
 * Return: -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (_sqrt_scan(n, 1));
}
