#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints all input strings.
 * @n: number of strings.
 * @separator: string seperator.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list intPrint;
	unsigned int i = 0;

	va_start(intPrint, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(intPrint, char *) == NULL)
			printf("nil");
		else
			printf("%s", va_arg(intPrint, char *));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(intPrint);
	printf("\n");
}
