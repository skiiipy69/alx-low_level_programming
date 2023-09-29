#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: binary.
 *
 * Return: the number converted or 0 if @b contains a character
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, pow;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, pow = 1; len >= 0; len--, pow *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += pow;
		}
	}

	return (i);
}
