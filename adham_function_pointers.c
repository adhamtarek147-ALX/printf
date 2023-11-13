#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
* func - pointer to functions va_list
* @characters: pointer to characters
*
* Return: 0
*/
int(*func(const char characters))(va_list)
{
	print_func(arr[]) = {
		{'c', adham_character},
		{'s', adham_string},
		{'d', adham_number},
		{'i', adham_number},
		{'\0', NULL}
	};

	int cnt;

	for (cnt = 0; arr[cnt].ch != '\0'; cnt++)
	{
		if (arr[cnt].ch == characters)
		{
			return (arr[cnt].func_ptr);
		}
	}
	return (0);
}
