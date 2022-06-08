#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to add the the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd1, num_letters, rw;

	if (!filename)
		return (-1);

	fd1 = open(filename, O_WRONLY | O_APPEND);
	if (fd1 == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; ++num_letters)
			;
		rw = write(fd1, text_content, num_letters);
		if (rw == -1)
			return (-1);
	}

	close(fd1);

	return (1);
}
