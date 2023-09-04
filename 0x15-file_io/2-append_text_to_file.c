#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename.
 * @text_content: content
 * Return: -1 if file doesn't exist, 1 if it exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b = 0;
	int c;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
		{
			b++;
		}
		c = write(a, text_content, b);
		if (c == -1)
		{
			close(a);
			return (-1);
		}
	}
	close(a);
	return (1);
}
