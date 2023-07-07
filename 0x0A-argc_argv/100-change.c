#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coins in change.
 * @argc: argument count.
 * @argv: command line arguments.
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int divnum = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (cents >= 25)
	{
		divnum = cents / 25;
		num += divnum;
		cents = cents % (divnum * 25);
	}
	if (cents >= 10)
	{
		divnum = cents / 10;
		num += divnum;
		cents = cents % (divnum * 10);
	}
	if (cents >= 5)
	{
		divnum = cents / 5;
		num += divnum;
		cents = cents % (divnum * 5);
	}
	if (cents >= 2)
	{
		divnum = cents / 2;
		num += divnum;
		cents = cents % (divnum * 2);
	}
	if (cents == 1)
		num++;
	printf("%d\n", num);
	return (0);
}
