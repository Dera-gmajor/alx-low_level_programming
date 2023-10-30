#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filename
 * @letters: letter
 * Return: numbers of printed letters, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		close(a);
		return (0);
	}
	r = read(a, buffer, letters);

	if (r == -1)
	{
		close(a);
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1 || (size_t)w != (size_t)r)
	{
		close(a);
		free(buffer);
		return (0);
	}
	close(a);
	free(buffer);
	return (w);
}
