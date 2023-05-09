#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to read from
 * @letters: number of letters to read
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int first_file;
	ssize_t r;
	char *string;
	ssize_t w;

	if (filename == NULL)
	{
		return (0);

	}
	first_file = open(filename, O_RDONLY);
	if (first_file == -1)
	{
		return (0);

	}
	string = malloc(sizeof(char) * letters);
	r = read(first_file, string, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, string, r);
	if (w == -1)
	{
		return (0);
	}
	free(string);
	close(first_file);

	return (w);
}
