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
	unsigned int x;
	va_list list;
	char *str;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
