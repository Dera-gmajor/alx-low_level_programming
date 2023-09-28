#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int a = 63;
	int b = 0;
	unsigned long int c;

	while (a >= 0)
	{
		c = n >> a;
		if (c & 1)
		{
			_putchar('1');
			b++;
		}
		else
		{
			if (b)
			{
				_putchar('0');
			}
		}
	}
	a--;
	if (!b)
	{
		_putchar('0');
	}
}
