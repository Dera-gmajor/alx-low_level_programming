#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of command line argument
 * @argv: array of character pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%i\n", a * b);
	return (0);
}
