#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int m;
	int n;

	for (m = '0'; m < '9'; m++)
	{
		for (n = '1'; n < '9'; n++)
		{
			putchar(m);
			putchar(n);
		{
			if (m != 8 || n != 9)
			{

				putchar(44);
				putchar(32);
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
