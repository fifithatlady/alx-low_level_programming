#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int  num)
{
	unsigned int nbits;

	for (nbits = 0; n || num; n >>= 1, num >>= 1)
	{
		if ((n & 1) != (num & 1))
			nbits++;
	}

	return (nbits);
}
