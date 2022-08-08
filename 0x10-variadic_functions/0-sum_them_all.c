#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all.
 * @n: given number.
 * Return: the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);
	return (sum);
}
