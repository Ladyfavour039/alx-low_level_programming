#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;
	unsigned int a;

	if (index > 32)
		return (-1);
	a = index;
	for (q = 1; a > 0; q *= 2, a--)
		;

	if ((*n >> index) & 1)
		*n -= q;

	return (1);
}
