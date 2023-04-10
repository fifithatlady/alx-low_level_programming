#include "main.h"

/**
 * print_binary - Prints a binary notation of a number.
 * @n: number to be printed in binary.
 */

void print_binary(unsigned long int num)
{
	if (num > 1)
		print_binary(num >> 1);

	_putchar((num & 1) + '0');
}
