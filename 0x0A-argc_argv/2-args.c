#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: argument count
 *
 * @argv: array pointer
 *
 * Return: 0 .
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)

	{
		printf("%s\n", argv[a]);
	}

	return (0);

}
