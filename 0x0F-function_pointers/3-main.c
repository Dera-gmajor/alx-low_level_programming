#include "3-calc.h"
/**
 * main - main function
 * @argc: arguement count
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char op = argv[2][0];
	int (*calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((op != '+' &&
			op != '-' &&
			op != '/' &&
			op != '*' &&
			op != '%')
			|| argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	calculate = get_op_func(argv[2]);

	printf("%d\n", calculate(a, b));
	return (0);
}
