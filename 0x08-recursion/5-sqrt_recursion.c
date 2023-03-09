#include "main.h"
/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: integer being tested
 * @x: int being tested
 * Return: 0
 */
int _sqrt_recursion(int n, int x)
{
	if ((x * x) > n)
		return (-1);
	if (n < 0)
		return (-1);
	if ((x * x) == n)
		return (x);
	return (_sqrt_recursion(n, x + 1));
}
