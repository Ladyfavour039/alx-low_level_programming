#include "main.h"

/**
 * append_text_to_file - append_text_to_file
 * @filename: the name of the file
 * @text_content: the content to write file to
 * Return: 1 (success) -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_write;
	ssize_t ven;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}

	file_write = open(filename, O_APPEND);

	if (file_write == -1)
	{
		return (-1);
	}

	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	ven = write(file_write, text_content, len);
	if (ven == -1)
	{
		return (-1);
	}

	close(file_write);
	return (1);
}
