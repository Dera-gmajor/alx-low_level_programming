#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its own opcodes
 * @argc: arguement count
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;
	b = 0;

	while (b < a)
	{
		if (b == a - 1)
		{
			printf("%02hhx\n", c[b]);
			break;
		}
		printf("%02hhx ", c[b]);
		b++;
	}
	return (0);
}
