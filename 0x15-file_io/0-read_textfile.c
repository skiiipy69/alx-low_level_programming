#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 *
 * @filename: filename.
 *
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If fails returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rcheck, wcheck;
	char *buff;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	rcheck = read(file, buff, letters);
	if (rcheck == -1)
		return (0);

	wcheck = write(STDOUT_FILENO, buff, rcheck);
	if (wcheck == -1 || rcheck != wcheck)
		return (0);
	free(buff);

	close(file);
	return (wcheck);
}

