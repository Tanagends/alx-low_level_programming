#include "main.h"
#include <stdio.h>
/**
* main - prints the numbers from 1 to 100, followed by a new line
* but for multiples of three prints Fizz instead of the number
* and for the multiples of five prints Buzz
* Return: Always 0 (Success)
*/
int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
		if (b % 3 == 0 &&  % 5 != 0)
		{
			printf(" Fizz");
		} else if (b % 5 == 0 && b % 3 != 0)
		{
			printf(" Buzz");
		} else if (b % 3 == 0 && b % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (b == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
