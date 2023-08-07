#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line argument
 * @argv: array of character pointers
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, y, z = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		z += atoi(argv[x]);
	}
	printf("%i\n", z);
	return (0);
}
