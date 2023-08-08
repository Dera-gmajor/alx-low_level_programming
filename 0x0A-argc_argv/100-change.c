#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: number of command line argument
 * @argv: array of character pointers
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int m;
	int coinValues[] = {25, 10, 5, 2, 1};
	int p, j, k = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);

	if (m > 0)
	{
		for (p = 0; p < 5; p++)
		{
			j = m / coinValues[p];
			k += j;
			m -= j * coinValues[p];
		}
	}
	printf("%d\n", k);
	return (0);
}
