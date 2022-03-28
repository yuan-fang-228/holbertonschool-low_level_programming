#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * read_textfile - read a text and print it to POSIX standard output
  * @filename: file to be read
  * @letters: the number of letters it should read and print
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readbytes, writebytes;
	char *filecontent;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	filecontent = malloc(sizeof(*filecontent) * (letters + 1));
	if (filecontent == NULL)
		return (0);
	readbytes = read(fd, filecontent, letters);
	if (readbytes < 0)
	{
		free(filecontent);
		close(fd);
		return (0);
	}
	filecontent[letters] = '\0';
	close(fd);
	writebytes = write(STDOUT_FILENO, filecontent, readbytes);
	if (writebytes < 0)
	{
		free(filecontent);
		close(fd);
		return (0);
	}

	return (writebytes);
}
