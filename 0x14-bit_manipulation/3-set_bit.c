#include "main.h"

/**
 * set_bit - sets value of a bit to at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int f;

	if (index > 32)
		return (-1);

	for (f = 1; index > 0; index--, f *= 2)
		;
	*n += f;

	return (1);
}
