#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * adham_character - Print character made my me (adham)
  * @a: va_list
  *
  * Return: 1
  */
int adham_character(va_list a)
{
	_putchar(va_arg(a, int));

	return (1);

}
