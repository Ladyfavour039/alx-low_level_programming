#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * Create-buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 *Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"ERR: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int p;

	p = close(fd);

	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't close fd int\n");
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: The number of argumentssupplied to the program.
 * @argv: An array of pointers to arguments.
 *
 * Return: always 0 on success
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_fish does not exist or cannot be read - exit code 98.
 *              If file_si cannot be created or written to - exit code 99.
 *              If file_si or file_fish cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int fish, si, a;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from_to\n");
		exit(98);
	}

	buffer = create_buffer(argv[2]);
	fish = open(argv[1], O_RDONLY);
	a = read(fish, buffer, 1024);
	si = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fish == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't read fish file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		a = read(fish, buffer, 1024);
		si = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buffer);
	close_file(fish);
	close_file(si);

	return (0);
}
