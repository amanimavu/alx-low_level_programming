#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends some text to an existing file
 * @filename: file to append the text
 * @text_content: the text to append
 *
 * Return: 1 if success -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count, bytes_written;
	mode_t mode = S_IWUSR;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY, mode);
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
