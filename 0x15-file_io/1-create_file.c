#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * Desc: Text_content A pointer to string to write to the file.
 *
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, size == 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0700);
	w = write(o, text_content, size);

	if (o == -1 || w == -1)
return (-1);

	close(o);

	return (1);
}
