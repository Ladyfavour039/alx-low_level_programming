#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was need ed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long m)
{
	unsigned long int wheel;
	int stone;

	wheel = n ^ m;
	stone = 0;

	while (wheel)
	{
		stone++;
		wheel &= (wheel - 1);
	}

	return (stone);
}
