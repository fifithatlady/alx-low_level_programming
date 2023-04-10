/**
 * clear_bit will sets the value of a bit to 0 at a given index.
 * @n: pointer to bit number to set
 * @index: index at which to set bit value
 *
 * Return: -1 if an error Else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	num = ~(1 << index);
	*n = *n & num;

	return (1);
}
