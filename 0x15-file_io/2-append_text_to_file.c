#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - length of a string
 * @str: pointer to string
 *
 * Return: length of string
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * appendText_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @textContent: The string to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL
 *         -1 If the file does not exist the user lacks write permissions
 *         Else 1.
 */

int appendText_to_file(const char *filename, char *textContent)
{
	int fd;
	ssize_t l;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (textContent != NULL)
		l = write(fd, textContent, _strlen(textContent));
	close(fd);
	if (l == -1)
		return (-1);
	return (1);
}

