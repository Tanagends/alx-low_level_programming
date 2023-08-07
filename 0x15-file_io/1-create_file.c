#include "main.h"
/**
 * create_file - creates file.
 * @filename: file.
 * @text_content: count.
 *
 * Return: 1 (Success).
 */
int create_file(const char *filename, char *text_content)
{
	size_t count;
	ssize_t writecount = 0;
	int file_descriptor;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (count = 0; text_content[count]; count++)
		;
	writecount = write(file_descriptor, text_content, count + 1);
	if (writecount == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
