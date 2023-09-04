#include "main.h"
void status_check(int a, int b, char *argv[]);
/**
 * main - main
 * @argc: arguement numbers
 * @argv: arguments vector.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	ssize_t x, y;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp a b");
		exit(97);
	}
	a = open(argv[1], O_RDONLY);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	status_check(a, b, argv);
	while ((x = read(a, buffer, 1024)) > 0)
	{
		if (x == -1)
			status_check(-1, 0, argv);
		y = write(b, buffer, x);
		if (y == -1)
			status_check(0, -1, argv);
	}
	c = close(a);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
	c = close(b);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b);
		exit(100);
	}
	return (0);
}

/**
 * status_check - checks if file content can be opened
 * @a: first fike
 * @b: second file
 * @argv: arguement
 */
void status_check(int a, int b, char *argv[])
{
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
