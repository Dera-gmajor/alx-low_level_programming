#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of args rep
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int sum = 0;
	unsigned int g = 0;
	va_list lists;

	va_start(lists, n);

	while (g < n)
	{
		int num = va_arg(lists, int);

		sum += num;
		g++;
	}
	va_end(lists);
	return (sum);
}
