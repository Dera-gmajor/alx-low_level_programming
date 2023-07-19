#include "main.h"
/**
 * main - main function
 * Description: print _putchar
 * Return: Always 0
 */
int main(void)
{
	char ch[] = "_putchar";
	int b = 0;

	while (ch[b] != 0)
	{
		_putchar(ch[b]);
		b++;
	}
	_putchar('\n');
	return (0);
}
