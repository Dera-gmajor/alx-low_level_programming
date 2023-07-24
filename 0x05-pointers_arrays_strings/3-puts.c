#include "main.h"
/**
 * _puts - prints a string to stdout
 * prints a string
 * @str: strings pointer
 * Return: void
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
