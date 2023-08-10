#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_number - Checks if a string represents a valid number.
 *
 * @s: The string to check.
 *
 * Return: 1 if @s is a number, 0 otherwise.
 */
int is_number(const char *s)
{
	if (s == NULL || *s == '\0')
		return (0);

	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * multiply_strings - Multiplies two numbers represented as strings.
 *
 * @num1: The first number string.
 * @num2: The second number string.
 *
 * Return: A dynamically allocated string containing the result.
 *         Caller is responsible for freeing the memory.
 */
char *multiply_strings(const char *num1, const char *num2)
{
	if (!is_number(num1) || !is_number(num2))
		return (NULL);

	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));

	if (result == NULL)
		return (NULL);

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	char *final_result = calloc(result_len + 1, sizeof(char));

	if (final_result == NULL)

	{
		free(result);
		return (NULL);
	}
	int index = 0;

	while (index < result_len && result[index] == 0)
		index++;

	for (int i = index; i < result_len; i++)
		final_result[i - index] = result[i] + '0';
	free(result);
	return (final_result);
}
/**
 * main - Entry point for the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	const char *num1 = argv[1];
	const char *num2 = argv[2];

	if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0)

	{
		printf("0\n");

		return (0);
	}

	char *result = multiply_strings(num1, num2);

	if (result == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}

