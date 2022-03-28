#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
  * _strlen - returns th length of a string
  * @s: string to check
  * Return: return the length
  */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}

/**
  * create_file - create a file
  * @filename: the file be create
  * @text_content: content to be added in the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int writebytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	length = _strlen(text_content);
	writebytes = write(fd, text_content, length);
	if (writebytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

