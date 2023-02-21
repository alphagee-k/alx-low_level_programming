#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: The number being checked
 * Return: Returns 1 for postive, Returns 0 for 0, Returns -1 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);

	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}
