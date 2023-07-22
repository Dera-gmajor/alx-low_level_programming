#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int u;
	int v;

	if (size <= 0)
		_putchar('\n');

	for (u = 0; u < size; u++)
	{
		for (v = 0; v < size; v++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
