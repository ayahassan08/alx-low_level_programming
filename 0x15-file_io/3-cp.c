#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't Close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program that copies the content of a file to another file
 * @file_a: int to be checked
 * @file_b: char to be checked
 * Return: 1 on success and 0 on failure
 *
*/

int main(int file_a, char **file_b)
{
	int fromFD = 0, toFD = 0;
	ssize_t x;
	char buffer[READ_BUF_SIZE];

	if (file_a != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	fromFD = open(file_b[1], O_RDONLY);

	if (fromFD == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, file_b[1]), exit(98);

	toFD = open(file_b[2], O_WRONLY | O_CREAT | O_TRUNC | PERMISSIONS);

	if (toFD == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, file_b[2]), exit(99);

	while ((x = read(fromFD, buffer, READ_BUF_SIZE)) > 0)
	{
		if (write(toFD, buffer, x) != x)
			dprintf(STDERR_FILENO, ERR_NOWRITE, file_b[2]), exit(99);
	}

	if (x == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, file_b[1]), exit(98);

	fromFD = close(fromFD);
	toFD = close(toFD);
	if (fromFD)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fromFD), exit(100);

	if (toFD)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fromFD), exit(100);

	return (EXIT_SUCCESS);
}
