#include "main.h"

/**
 *_memcpy - copies memory area from src to dest n times
 *
 *@dest: pointer that will receive the copied data
 *@src: pointer that has the information to be copied
 *@n: amount of times src information willbe copied to dest
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a;

	a = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (a);
}
