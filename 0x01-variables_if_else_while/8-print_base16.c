#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int m;
	char ch;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}

	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
