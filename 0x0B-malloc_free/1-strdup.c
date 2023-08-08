#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 *
 * @str: string to duplicate
 *
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int a, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	duplicate = (char *)malloc((sizeof(char) * size) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		duplicate[a] = str[a];
	duplicate[size] = '\0';

	return (duplicate);
}
