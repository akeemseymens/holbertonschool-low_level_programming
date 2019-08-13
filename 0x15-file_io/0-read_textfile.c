#include "holberton.h"

/**
 * read_textfile - Write a function that reads a text file\
 * and prints it to the POSIX standard output.
 * @filename: Path of the file.
 * @letters: number of letters.
 * Return: Null if filename returns 0 or if file can't be open.
 * returns the actual number of letters if could read and write.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd_count, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));

	if (!buf)
	{
		return (0);
		close(fd);
	}

	rd_count = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd_count);
	if (rd_count == -1)
		return (0);

	close(fd);
	return (wr);
}
