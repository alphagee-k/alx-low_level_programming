#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum
 * @n: int
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(int);
	}
	va_end(n);
	return (sum);

}
