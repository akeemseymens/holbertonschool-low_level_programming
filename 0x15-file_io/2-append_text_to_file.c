#include "holberton.h"

/**
 * create_file - Write a function that reads a text file\
 * and prints it to the POSIX standard output.
 * @filename: Path of the file.
 * @text_content: what is in the file.
 * Return: Null if filename returns 0 or if file can't be open.
 * returns the actual number of letters if could read and write.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_APPEND | O_RDWR);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
