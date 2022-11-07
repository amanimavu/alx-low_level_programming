#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * create_file - create a file and file it with some given content
 * @filename: the file to create
 * @text_content: buffer containing text to be written to the filename
 *
 * Return: 1 if success -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	mode_t mode = S_IWUSR | S_IRUSR;
	int fd, count, bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		count = strlen(text_content);
		bytes_written = write(fd, text_content, count);
		if (bytes_written == -1)
			return (-1);
	}
	return (1);
}
