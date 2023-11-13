#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * adham_string - printing string made by me (adham)
 * @a: va_list
 *
 * Return: cnt_char
 */
int adham_string(va_list a)
{
	char *string;

	int cnt_char;

	string = va_arg(a, char*);

	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	else
	{
		for (cnt_char = 0; string[cnt_char] != '\0'; cnt_char++)
		{
			_putchar(string[cnt_char]);
		}
	}
	return (cnt_char);
}
