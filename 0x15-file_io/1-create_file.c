#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * createFile - creates a file.
 * @filename: name of the file to create
 * @textContent: NULL terminated string to write to the file
 *
 * Return: -1 if failure else 1
 */

int createFile(const char *filename, char *textContent)
{
	int d, z;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (textContent != NULL)
	{
		for (len = 0; textContent[len];)
			len++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(d, textContent, len);

	if (d == -1 || z == -1)
		return (-1);

	close(d);

	return (1);
}
