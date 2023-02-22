#include "main.h"
/**
 * print_last_digit - print the last digit
 * @c: The number being checked
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	_putchar(last + '0');
	return (last);
}
