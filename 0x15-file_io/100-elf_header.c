#include "main.h"
#define MAXSIZE 1204
#define SE STDERR_FILENO
/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int input, output, stat_i, stat_o;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input = open(av[1], O_RDONLY);
	if (input == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		stat_i = read(input, buf, MAXSIZE);
		if (stat_i == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (stat_i > 0)
		{
			stat_o = write(output, buf, (ssize_t) stat_i);
			if (stat_o == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (stat_i > 0);
	stat_i = close(input);
	if (stat_i == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input_fd),
		exit(100);
	stat_o = close(output);
	if (stat_o == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output),
		exit(100);
	return (0);
}
