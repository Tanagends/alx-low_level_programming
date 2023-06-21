#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers
* Return: 0 (Success)
*/
int main(void)
{
	int count;
	long int fib1 = 1;
	long int fib2 = 2;
	long int sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%ld", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
