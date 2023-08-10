#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string composed of digits
 * @s: input
 *
 * Return: 0 if a non-digit is found, 1 if not
 */
int is_digit(char *s)
{
	int d = 0;

	while (s[d])
	{
		if (s[d] < '0' || s[d] > '9')
			return (0);
		d++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, m, carry, digit1, digit2, *sum, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;
	sum = malloc(sizeof(int) * length);
	if (!sum)
		return (1);
	for (m = 0; m <= length1 + length2; m++)
		sum[m] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			digit2 = s2[length2] - '0';
			carry += sum[length1 + length2 + 1] + (digit1 * digit2);
			sum[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			sum[length1 + length2 + 1] += carry;
	}
	for (m = 0; m < length - 1; m++)
	{
		if (sum[m])
			a = 1;
		if (a)
			_putchar(sum[m] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(sum);
	return (0);
}
