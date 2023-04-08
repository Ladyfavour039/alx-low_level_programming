#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: If b is Null or contains chars not 0 or 1 - 0
 *       Otherwise - the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int suv, vex;
	int croc;

	if (b == NULL)
		return (0);

	for (croc = 0; b[croc] != '\0'; croc++)
	{
		if (b[croc] != '0' && b[croc] != '1')
			return (0);
	}

	for (vex = 1, suv = 0, croc--; croc >= 0; croc--, vex *= 2)
	{
		if (b[croc] == '1')
			suv += vex;
	}

	return (suv);
}
