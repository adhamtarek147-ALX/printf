#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* adham_integer - Print number made by me (adham)
* @a: va_list
*
* Return: cnt
*/
int adham_integer(va_list a)
{
	int arr[10];
	int x, y, z, sum, cnt;

	z = va_arg(a, int);
	cnt = 0;
	y = 1000000000;
	arr[0] = z / y;
	for (x = 1; x < 10; x++)
	{
		y = y / 10;
		arr[x] = (z / y) % 10;
	}
	if (z < 0)
	{
		_putchar('-');
		cnt++;
		for (x = 0; x < 10; x++)
			arr[x] *= -1;
	}
	for (x = 0, sum = 0; x < 10; x++)
	{
		sum += arr[x];
		if (sum != 0 || x == 9)
		{
			_putchar('0' + arr[x]);
			cnt++;
		}
	}
	return (cnt);
}
