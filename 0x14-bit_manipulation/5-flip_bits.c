#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b, c;
	unsigned int n, num;

	c = 1;
	b = b ^ c;
	n = 0;

	for (num = 0; num < (sizeof(unsigned long int) * 8); num++)
	{
		if (c == (b & c))
			n++;
		c <<= 1;
	}
	return (n);
}
