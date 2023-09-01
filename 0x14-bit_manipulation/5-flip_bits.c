#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: num 1
 * @m: num 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 63, b = 0;
	unsigned long int c;
	unsigned long int d = n ^ m;

	while (a >= 0)
	{
		c = d >> a;
		if (c & 1)
			b++;
		a--;
	}
	return (b);
}
