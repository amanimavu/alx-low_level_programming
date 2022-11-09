#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of th program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd_1, fd_2, bytes_read, bytes_written;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	umask(0002);
	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0666);
	buf = malloc(sizeof(char) * 1024);
	while (1)
	{
		bytes_read = read(fd_1, buf, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (bytes_read == 0)
			break;
		bytes_written = write(fd_2, buf, 1024);
		if (bytes_written == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd_1) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	if (close(fd_2) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
	return (0);
}
