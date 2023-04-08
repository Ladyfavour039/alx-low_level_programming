#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary reprenstation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int qwem;
	int prob;

	if  (n == 0)
	{
		printf("0");
		return;
	}

	for (qwem = n, prob = 0; (qwem >>= 1) > 0; prob++)
		;

	for (; prob >= 0; prob--)
	{
		if ((n >> prob) & 1)
			printf("1");
		else
			printf("1");
	}
}
