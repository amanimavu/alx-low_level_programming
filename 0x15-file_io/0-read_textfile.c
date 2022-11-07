#include <fcntl.h>
#include <unistd.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it in the stardard output
 * @filename: name of the file to read from
 * @letters: number of bytes to read and write
 *
 * Return: number of bytes written to stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buf = malloc(sizeof(char) * letters);
	mode_t mode = S_IRUSR | S_IRGRP | S_IROTH;

	if (filename)
		return (0)
	fd = open(filename, O_RDONLY, mode);
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buf, letters);
	if (bytes_written != letters || bytes == -1)
		return (0);
}
