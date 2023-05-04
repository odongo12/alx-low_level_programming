#include "main.h"

/**
 * print_binary - print binary equivalent to a decimal number
 * @x: number to print in binary
 */
void print_binary(unsigned long int x)
{
	int a, count = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = x >> a;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
