#include "main.h"

/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file to be checked
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes,
 * return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t samp;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	samp = read(fd, &buffer[0], letters);
	samp = write(STDOUT_FILENO, &buffer[0], samp);

	close(fd);

	return (samp);
}
