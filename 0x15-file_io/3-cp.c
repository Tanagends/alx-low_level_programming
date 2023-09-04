#include "main.h"
#include <stdbool.h>
void prnt_error(void);
void err98(char *filename);
void err99(char *filename, int fdfrom, int fdto);
void err100(int i, int fd);

/**
 * prnt_error - prints error
 * @i: fd for error output.
 * @errtxt: error message.
 * @ex: exit status.
 */
void prnt_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * err98 - exits if file from is absent or unreadable.
 * @filename: the file.
 */
void err98(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * err99 - prints write error.
 * @filename: unwritten file.
 * @fdto: source fd.
 * @fdfrom: destination fd.
 */
void err99(char *filename, int fdfrom, int fdto)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	if (fdfrom != -1)
		close(fdfrom);
	if (fdto != -1)
		close(fdto);
	exit(99);
}
/**
 * err100 - handles close error
 * @i: close return value.
 * @fd: file descriptor
 */
void err100(int i, int fd)
{
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies contents from one file to the other.
 * @argc: argument count.
 * @argv: arguments.
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char buffer[1024] = "";
	int fdfrom, fdto, fro, to;
	ssize_t readd = 1024, writ;

	if (argc != 3)
		prnt_error();
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
		err98(argv[1]);
	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (readd == 1024)
	{
		readd = read(fdfrom, buffer, 1024);
		if (readd == -1)
			err98(argv[1]);
		writ = write(fdto, buffer, readd);
		if (writ == -1 || writ != readd)
			err99(argv[2], fdfrom, fdto);
	}
	fro = close(fdfrom);
	err100(fro, fdfrom);
	to = close(fdto);
	err100(to, fdto);
	return (0);
}
