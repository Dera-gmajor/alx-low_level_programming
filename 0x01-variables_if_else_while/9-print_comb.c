#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
		if (y > '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
