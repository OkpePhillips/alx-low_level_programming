#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *byte;

	num = 1;
	byte = (char *) &num;

	return ((int)*byte);
}

