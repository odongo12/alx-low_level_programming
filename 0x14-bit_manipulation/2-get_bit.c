#include "main.h"
/**
 * get_bit - return value of a bit at an index in a decimal number
 * @x: number to search
 * @index: index of bit
 *
 * Return: value of bit
 */
int get_bit(unsigned long int x, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (x >> index) & 1;

	return (bit_val);
}

