#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into word.
 *
 * @str: string
 *
 * Return: strings
 */
char **strtow(char *str)
{
	int i, sum, length;
	char **word;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = sum = length = 0;
	while (str[i])
	{
		if (sum == 0 && str[i] != ' ')
			sum = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			sum = 0;
			length++;
		}
		i++;
	}

	length += sum == 1 ? 1 : 0;
	if (length == 0)
		return (NULL);

	word = (char **)malloc(sizeof(char *) * (length + 1));
	if (word == NULL)
		return (NULL);

	util(word, str);
	word[length] = NULL;
	return (word);
}

/**
 * util - a util function for fetching word into an array
 *
 * @word: strings array
 *
 * @str: string
 *
 */
void util(char **word, char *str)
{
	int i, m, s, sum;

	i = m = sum = 0;
	while (str[i])
	{
		if (sum == 0 && str[i] != ' ')
		{
			s = i;
			sum = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(word, str, s, i, m);
			m++;
			sum = 0;
		}

		i++;
	}

	if (sum == 1)
		create_word(word, str, s, i, m);
}

/**
 * create_word - creates a word and insert it into the array
 * @word: the array of strings
 *
 * @str: string
 *
 * @s: starting index
 *
 * @end: stopping index
 *
 * @index: index array
 */
void create_word(char **word, char *str, int s, int end, int index)
{
	int i, m;

	i = end - s;

	word[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (m = 0; s < end; s++, m++)
		word[index][m] = str[s];
	word[index][m] = '\0';
}
