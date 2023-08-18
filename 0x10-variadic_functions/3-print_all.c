#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;

	va_start(list, format);
	const char *t = format;

	while (*t)
	{
		if (*t == 'c')
		{
			char f = va_arg(list, int);

			printf("%c", f);
		}
		else if (*t == 'i')
		{
			int n = va_arg(list, int);

			printf("%d", n);
		}
		else if (*t == 'f')
		{
			double d = va_arg(list, double);

			printf("%f", d);
		}
		else if (*t == 's')
		{
			char *s = va_arg(list, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", s);
		}
		t++;
	}
	va_end(list);
	printf("\n");
}
