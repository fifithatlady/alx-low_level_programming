#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The bits
 * @index: index to check bit and get value
 *
 * Return: -1 if error, Else value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int f;

	if (n == 0 && index < 24)
		return (0);

	for (f = 0; f <= 23; n >>= 1, f++)
	{
		if (index == f)
		{
			return (n & 1);
		}
	}

	return (-1);
}
