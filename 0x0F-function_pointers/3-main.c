#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - operates on two numbers.
 * @argc: command line argument count.
 * @argv: argument input.
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i, t;
	char *c = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	t = atoi(argv[3]);
	if (get_op_func(c) == NULL || *c == '\0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c)(i, t));
	return (0);
}
