#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printchar - print char from va_list
 * @list: va_list to function
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printstr - print string from va_list
 * @list: va_list to function
 */
void _printstr(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * _printfloat - print float type element from va_list
 * @list: va_list passed to function
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _printint - print int type element from va_list
 * @list: va_list passed to function
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{
	unsigned int i, y;
	va_list args;
	char *sepe;

	func_print storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	i = 0;
	sepe = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		y = i % 4;
		if (storage[y].type[0] == format[i / 4])
		{
			printf("%s", sepe);
			storage[y].f(args);
			sepe = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
