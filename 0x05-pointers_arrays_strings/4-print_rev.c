#imclude "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s:strings pointer
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int b;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	b = len - 1;

	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
