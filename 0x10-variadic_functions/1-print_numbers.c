#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints all input integers.
 * @n: number of integers.
 * @separator: number seperator.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list intPrint;
	unsigned int i = 0;

	if (n == 0)
		return;
	va_start(intPrint, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(intPrint, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(intPrint, int));
	va_end(intPrint);
}
