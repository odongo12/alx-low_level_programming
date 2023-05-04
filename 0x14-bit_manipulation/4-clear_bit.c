#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @x: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = (~(1UL << index) & *x);
	return (1);
}
