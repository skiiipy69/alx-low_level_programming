#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: filename
 *
 * @text_content: content writed in the file
 *
 * Return: 1 if success or -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int i;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		b = write(a, text_content, i);
		if (b == -1)
			return (-1);
	}

	close(a);
	return (1);
}

