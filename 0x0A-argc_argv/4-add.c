#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds command line argument numbers.
 * @argc: argument count.
 * @argv: command line arguments.
 * Return: 0(success).
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	for (; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && **(argv + i) != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
