#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print a string.
 * @separator: string
 * @n: number of strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *hold;


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		hold = va_arg(ap, char *);
		if (hold)
			printf("%s", hold);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
