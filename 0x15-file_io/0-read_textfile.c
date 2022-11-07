#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

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

	if (!buf)
		return (0);

	/*return 0 when filename is NULL*/
	if (!filename)
		return (0);

	/**
	 * open the file specified by the filename
	 * return 0 if an error occured
	 */
	fd = open(filename, O_RDONLY, mode);
	if (fd == -1)
		return (0);

	/**
	 * read the opened file specified by fd
	 * return 0 if an erro occured
	 * close the file descriptor
	 */
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);
	close(fd);

	/**
	 * write to buffer
	 * return 0 if bytes written are not equal to bytes read
	 * and if an error occured when writeing to stdout
	 */
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);
	close(STDOUT_FILENO);
	return (bytes_written);
}
