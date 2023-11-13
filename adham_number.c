#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* adham_number - Print number made by me (adham)
* @a: va_list
*
* Return: cnt
*/
int adham_number(va_list a)
{
	long int number;
	int nxt_number, cnt = 0, nxt;

	number = va_arg(a, int);
	if (number < 0)
	{
		number *= -1;
		_putchar(45);
		cnt++;
	}
	if (number >= 0 && number <= 9)
	{
		_putchar(number + 48);
		cnt++;
	}
	if (number > 9)
		nxt = 10;
	while (number / nxt > 9)
	{
		nxt *= 10;
	}
	while (nxt > 0)
	{
		nxt_number = number / nxt;
		number = number % nxt;
		_putchar(nxt_number + 48);
		nxt = nxt / 10;
		cnt++;
	}
	return (cnt++);
}
