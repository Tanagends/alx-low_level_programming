#include "main.h"
/**
 * create_file - creates file and prints to stdoutput.
 * @filename: file.
 * @text_content: count.
 *
 * Return: printed letters count.
 */
int create_file(const char *filename, char *text_content)
{
	size_t count;
	int file_descriptor;
	char *buffer;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT, 0600);
	if (file_descriptor == -1)
		return (0);
	if (text_content == NULL)
		return (1);
	for (count = 0; text_content[count]; count++)
		;
	writecount = write(file_descriptor, text_content, count);
	if (writecount == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
