#include <stdarg.h>
#include "main.h"

/**
 * adham_decimal - Prints a decimal number made by me (adham)
 * @a: number to be printed
 *
 * Return: cnt
 */
int adham_decimal(va_list a)
{
	int arr[10];
	int x, y, z;
	int sum, cnt = 0;

	z = va_arg(a, int);

	y = 1000000000;
	arr[0] = z / y;

	for (x = 1; x < 10; x++)
	{
		y /= 10;
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
