#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int m;
	char ch;

	for (m = 1; m <= 10; m++)
	{
		for (ch = 'a'; ch < 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
