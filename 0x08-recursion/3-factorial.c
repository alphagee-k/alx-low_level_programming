#include "main.h"
/**
 * factorial - calculate the factorial
 * @n: integer being used
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
