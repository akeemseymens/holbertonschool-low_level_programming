#include "holberton.h"
void function_count(int ac);
void function_close(int fd);

/**
 * main - check the code for Holberton School students.
 *@argc: count
 *@argv: vector count
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_org, fd_cp, rd = 1, wr;
	char buff[1024];

	function_count(argc);

	fd_org = open(argv[1], O_RDONLY);
	if (fd_org == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from
file %s\n", argv[1]);
		exit(98); }
	fd_cp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (rd != 0)
	{
		rd = read(fd_from, buf, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from
file %s\n", argv[1]);
			exit(98); }
		if (rd != 0)
		{
			wr = write(fd_cp, buff, r);
			if (wr == -1)
			{dprintf(STDERR_FILENO, "Error: Can't write
to %s\n", argv[2]);
				exit(99);
			}
		}
	}
	function_close(fd_org);
	function_close(fd_cp);
	return (0);
}

/**
 * function_count - test the failure count.
 * @ac: testing int var.
 * Return: Always 0.
 */
void function_count(int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * function_close - closes and test the close.
 * @fd: function descriptor.
 * Return: Always 0.
 */

void function_close(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
