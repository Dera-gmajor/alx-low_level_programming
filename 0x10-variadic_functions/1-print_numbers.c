#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator
 * @n: number of arguement
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list aug;
	unsigned int y;

	va_start(aug, n);

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(aug, int));

		if (y < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(aug);
	printf("\n");
}
