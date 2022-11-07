#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * open_and_read_file_from - open a file and read from it
 * @file_from: given file to read from
 * @buf: buffer to store the contents of read
 *
 * Return: number of bytes actually read
 */
int open_and_read_file_from(char *file_from, char *buf)
{
	mode_t mode_1 = S_IRUSR;
	int fd_1, bytes_read, close_status_1;

	fd_1 = open(file_from, O_RDONLY, mode_1);
	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	bytes_read = read(fd_1, buf, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close_status_1 = close(fd_1);
	if (close_status_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	return (bytes_read);

}

/**
 * open_and_write_file_to - open a file and write to it
 * @file_to: fikle to write to
 * @buf: buffer that contains that contains string read from file_from
 * @bytes_read: actual read bytes that are to be written to file_to
 *
 * Return: nothing
 */

void open_and_write_file_to(char *file_to, char *buf, int bytes_read)
{
	int bytes_written, fd_2, close_status_2;

	umask(0002);

	fd_2 = open(file_to, O_TRUNC | O_WRONLY | O_CREAT, 0666);
	if (fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	bytes_written = write(fd_2, buf, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	close_status_2 = close(fd_2);
	if (close_status_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 implying success
 */
int main(int argc, char **argv)
{
	char *buffer = malloc(sizeof(char) * 1024);
	int actual_bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	actual_bytes_read = open_and_read_file_from(argv[1], buffer);

	open_and_write_file_to(argv[2], buffer, actual_bytes_read);

	return (0);

}
