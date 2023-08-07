#include "main.h"
/**
 * append_text_to_file - appends to file.
 * @filename: file.
 * @text_content: appending file.
 *
 * Return: 1 (Success).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t count;
	ssize_t writecount = 0;
	int file_descriptor;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count]; count++)
			;
		writecount = write(file_descriptor, text_content, count);
		if (writecount == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
