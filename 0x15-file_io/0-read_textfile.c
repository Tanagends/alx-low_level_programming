#include "main.h"
/**
 * read_textfile - reads file and prints tpo stdoutput.
 * @filename: file.
 * @letters: count.
 *
 * Return: printed letters count.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t readcount, writecount;
	int file_descriptor;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_descriptor = open("filename", O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		close(file_descriptor);
	readcount = read(file_descriptor, buffer, letters);
	if (readcount == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	writecount = write(STDOUT_FILENO, buffer, letters);
	if (writecount == -1 || writecount != readcount)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (readcount);
}
