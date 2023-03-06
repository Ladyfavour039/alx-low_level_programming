#include <string.h>

/**
 * _strspn - a function ...
 * @s: the chaine
 * @accept: the chaine
 *
 * Return: 1 or 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] && strchr(accept, s[i]))
		i++;
	return (i);
}

