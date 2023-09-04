#include "main.h"

/**
 * append_text_to_file - a funcion that appends text at the end
 *						of a file.
 *
 * @filename: file to add data to
 *
 * @text_content: text content to add to file
 *
 * Return: 1 on success or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	a = open(filename, O_APPEND | O_WRONLY);
	if (a == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	b = write(a, text_content, i);
	if (b == -1)
		return (-1);

	close(a);
	return (1);
}
