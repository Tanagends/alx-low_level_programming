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
	char *str;

	va_start(intPrint, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(intPrint, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", seprator);
	}
	va_end(intPrint);
	printf("\n");
}
