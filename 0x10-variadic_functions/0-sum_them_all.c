#include <stdarg.h>
/**
 * sum_them_all - sums all input integers.
 * @n: number of integers.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);
	va_start(add, n);
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);
	va_end(add);
	return (sum);
}
