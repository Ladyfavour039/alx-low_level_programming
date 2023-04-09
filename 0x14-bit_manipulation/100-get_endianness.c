#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */

int get_endianness(void)
{
	int queu;

	queu = 1;
	if (*(char *)&queu == 1)
		return (1);
	else
		return (0);
}
