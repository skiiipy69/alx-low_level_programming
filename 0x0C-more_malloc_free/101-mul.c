#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer
 *
 * @b: characters to fill/set
 *
 * @n: number of bytes to be filled
 *
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory
 *
 * @nmemb: size of array
 *
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);

	return (p);
}


/**
 * multiply - initialize array with 0 byte
 *
 * @s1: 1st string
 *
 * @s2: 2nd string
*/

void multiply(char *s1, char *s2)
{
	int x, len1, len2, sum1, digit_1, digit_2, sum = 0, cont;
	char *p;
	void *temp;

	len1 = _length(s1);
	len2 = _length(s2);
	cont = len2;
	sum1 = len1 + len2;
	p = _calloc(sizeof(int), sum1);

	/* store our pointer address to free later */
	temp = p;

	for (len1--; len1 >= 0; len1--)
	{
		digit_1 = s1[len1] - '0';
		sum = 0;
		len2 = cont;
		for (len2--; len2 >= 0; len2--)
		{
			digit_2 = s2[len2] - '0';
			sum += p[len2 + len1 + 1] + (digit_1 * digit_2);
			p[len1 + len2 + 1] = sum % 10;
			sum /= 10;
		}
		if (sum)
			p[len1 + len2 + 1] = sum % 10;
	}

	while (*p == 0)
	{
		p++;
		sum1--;
	}

	for (x = 0; x < sum1; x++)

		printf("%x", p[x]);

	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 *
 * Description: program multiplies two positive numbers
 *
 *
 * @argc: number of arguments
 *
 * @argv: arguments array
 *
 * Return: 0 or 98
*/

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || check_number(num1) || check_number(num2))
		error_exit();

	if (*num1 == '0' || *num2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(num1, num2);
	return (0);
}
