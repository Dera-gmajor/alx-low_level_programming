#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line argument
 * @argv: array of character pointers
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
