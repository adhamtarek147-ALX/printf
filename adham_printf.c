#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _printf - adham's printf
* @format: string specifier formats.
*
* Return: character_number.
*/
int _printf(const char *format, ...)
{
	va_list a;
	unsigned int x = 0, character_number = 0;

	if (!format)
		return (-1);
	va_start(a, format);
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == '\0')
				return (-1);
			else if (format[x + 1] == '%')
			{
				_putchar('%');
				character_number++;
				x++;
			}
			else if (func(format[x + 1]) != NULL)
			{
				character_number += (func(format[x + 1]))(a);
				x++;
			}
			else
			{
				_putchar(format[x]);
				character_number++;
			}
		}
		else
		{
			_putchar(format[x]);
			character_number++;
		}
	}
	return (character_number);
	va_end(a);
}
