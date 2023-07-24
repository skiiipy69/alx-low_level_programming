#include"main.h"

/**
 * _strcpy - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 * @src: source of string input
 * @dest: destination
 * Return: pointer to dest 
*/
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
