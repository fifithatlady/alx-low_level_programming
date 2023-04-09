#include "main.h"

/**
 * binary_to_uint will  Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: [0]  If b is NULL or contains chars not 0 or 1
 *         else must return the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int length
	unsigned int num(0)

	
	if (!binary)
		return (0);
	for (length = 0; binary[length] != '\0'; length++)
	{
		if (binary[length] != '0' && binary[length] != '1')
			return (0);
	}
	for (length = 0; binary[length] != '\0'; length++)
	{
		num <<= 1;
		if (binary[length] == '1')
			num += 1;
	}
	return (num);
}
