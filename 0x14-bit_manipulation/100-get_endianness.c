#include "main.h"
#include <stdint.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	uint32_t a = 1;
	uint8_t *b = (uint8_t *)&a;

	return (*b);
}

