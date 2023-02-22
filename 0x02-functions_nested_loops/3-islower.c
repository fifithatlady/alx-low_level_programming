#include "main.h"

/**
 * _islower - Check for lower case character
 * @c: The character to be checked
 * Return: 1 if lower case and 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
