#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: 0(Success)
 */
int main(void)
{
	int n=0;
	
	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
			putchar(',');
		putchar(' ');
		a++;
	}
	putchar(9 + '0');
	return (0);
}
