#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		_putchar(45);
	}
	_putchar('\n');
}
