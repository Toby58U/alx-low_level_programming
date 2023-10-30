#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd;
	ssize_t rd, wrt;
	char *buffer

		if (filename == NULL)
			return 0;
	/* Open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return 0;
	/* Buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{	close(fd);
		return 0;
	}

	rd = read(fd, buffer, letters);
	close(fd);
	if (rd == -1)
	{
		free(buffer);
		return 0;
	}

	wrt = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	if (rd != wrt)
		return 0;
	return wrt;
}
