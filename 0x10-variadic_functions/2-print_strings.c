#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator
 * @n: number of arguements
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int k;
	char *d;

	va_start(str, n);

	for (k = 0; k < n; k++)
	{
		d = va_arg(str, char *);
	if (d == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", d);
	}
	if (k != n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
