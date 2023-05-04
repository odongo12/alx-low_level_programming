#include "main.h"

/**
 * clear_bit - setvalue of a given bit to 0
 * @x: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int x, unsigned long int a)
{
	int c, count = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ a;

	for (c = 63; c >= 0; c--)
	{
		current = exclusive >> c;
		if (current & 1)
			count++;
	}

	return (count);
}

