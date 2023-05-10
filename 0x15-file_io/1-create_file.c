#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content to write to file_name
 * Return: 1 (success) -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int file_variable;
	ssize_t wr;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}

	file_variable = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_variable == -1)
	{
		return (-1);
	}


	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	wr = write(file_variable, text_content, len);
	if (wr == -1)
	{
		return (-1);
	}
	close(file_variable);
	return (1);

}
