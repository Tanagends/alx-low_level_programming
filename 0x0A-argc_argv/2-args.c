#include <stdio.h>
/**
 * main - prints all arguments.
 * @argc: argument count.
 * @argv: command line arguments.
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int i = 0;
	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
