#include <stdio.h>
/**
 * main - prints multiplication result.
 * @argc: argument count.
 * @argv: command line arguments.
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
		printf("Error\n");
		return (-1);
	else
		product = atoi(arg[1]) * atoi(argv[2]);
		printf("%d\n", product);
	return (0);
}
