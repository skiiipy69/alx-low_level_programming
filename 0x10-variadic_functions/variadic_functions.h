#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>


void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);
/**
 * struct func_print - new struct type defining print
 *
 * @check: check data type
 * @print_func: a function pointer that prints
 *             a data type according to the symbol
*/

typedef struct func_print
{
	char *type;
	void (*f)();
} func_print;
#endif /* VARIADIC_FUNCTIONS_H */
