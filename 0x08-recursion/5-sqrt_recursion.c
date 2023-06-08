#include "main.h"

int sq(int n, int i);

/**
 * _sqrt_recursion - finds the natural square root
 * @n: number to square
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sq(n, 0));
}
/**
 * sq - square root
 * @n: number
 * @i: counter
 * Return: 0
 */
int sq(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sq(n, i + 1));
}
