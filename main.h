#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct - structure for printf
 * @ch: pointer to characters specifiers
 * @func_ptr: pointer to va_list functuions.
 *
 */
typedef struct types
{
	char ch;
	int (*func_ptr)(va_list);
} print_func;

int adham_character(va_list a);
int adham_string(va_list a);
int (*func(const char a))(va_list);
int adham_number(va_list a);
int _printf(const char *format, ...);
int _putchar(char c);
int adham_integer(va_list a);
int adham_decimal(va_list a);

#endif /* MAIN_H */
