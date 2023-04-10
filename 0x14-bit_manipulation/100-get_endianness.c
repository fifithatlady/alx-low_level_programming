#include "main.h"

/**
 * get_endianness will Checks the endianness.
 *
 * Return: (0) If big-endian.
 *         (1) If little-endian.
 */

int get_endianness(void)
{
	char *felly;
	int num = 1;

	felly = (char *)&num;

	return (*felly);
}
