#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.g>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: integer
 * @...: variable of parameters
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, n));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
