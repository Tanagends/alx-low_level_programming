#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to have its last digit determined.
 * Return: the last number of a digit.
 */
int print_last_digit(int n)
{
	int lastnum;

	lastnum = n % 10;
	if (n < 0)
		lastnum *= -1;
	_putchar(lastnum + '0');
	return (lastnum);
}
