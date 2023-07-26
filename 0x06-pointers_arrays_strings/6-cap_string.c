#include "main.h"
/**
 * cap_string - a function that capitalizes
 *              all words of a string
 * @str: input array
 *
 * Return: @s
*/
char *cap_string(char *str)
{
	int a, b;
	int t;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (a = 0, t = 0; str[a] != '\0'; a++)
	{
		if (str[0] > 96 && str[0] < 123)
			t = 1;
		for (b = 0; nots[b] != '\0'; b++)
		{
			if (nots[b] == str[a])
				t = 1;
		}

		if (t)
		{
			if (str[a] > 96 && str[a] < 123)
			{
				str[a] -= 32;
				t = 0;
			}
			else if (str[a] > 64 && str[a] < 91)
				t = 0;
			else if (str[a] > 47 && str[a] < 58)
				t = 0;
		}
	}
	return (str);
}
