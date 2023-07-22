#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int g;

	for (g = 0; g < 57; g++)
	{
		_putchar(g + 48);
	}
	_putchar('\n');
}
