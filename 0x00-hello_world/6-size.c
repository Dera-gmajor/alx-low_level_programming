#include <stdio.h>

/**
 * main - print size of data types
 *
 * Return: Always (0)
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of an unsigned int: %d byte(s)\n", sizeof(unsigned int));
	return (0);
}
