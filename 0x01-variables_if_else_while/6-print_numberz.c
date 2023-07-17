#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar(y + '0');
	}
	putchar('\n');
	return (0);
}
