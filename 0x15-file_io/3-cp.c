#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * err_msg - print out error message
 * @i: error msg indicator
 * @filename: filename
 * Return: void
 */
void err_msg(int i, char *filename)
{
	if (i == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (i == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (i == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", filename);
		exit(99);
	}
	if (i == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", filename);
		exit(100);
	}
}
/**
 * main - copy a file content to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, readbytes, writebytes;
	char buffer[1024];

	if (argc != 3)
		err_msg(97, "");
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		err_msg(98, argv[1]);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		err_msg(99, argv[2]);
	while ((readbytes = read(fd_from, buffer, 1024)) > 0)
	{
		writebytes = write(fd_to, buffer, readbytes);
		if (writebytes == -1 || writebytes != readbytes)
		{
			close(fd_from);
			err_msg(99, argv[2]);
		}
	}
	if (readbytes == -1)
	{
		close(fd_to);
		err_msg(98, argv[1]);
	}
	if (close(fd_from) < 0)
	{
		close(fd_to);
		err_msg(100, argv[1]);
	}
	if (close(fd_to) < 0)
	{
		close(fd_from);
		err_msg(100, argv[2]);
	}

	return (0);
}
