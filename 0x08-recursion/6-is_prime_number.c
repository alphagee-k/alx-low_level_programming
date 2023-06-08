#include "main.h"

int zheprime(int n, int i);

/**
 * is_prime_number - finds prime
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (zheprime(n, n - 1));
}
/**
 * zheprime - returns prime
 * @n: number
 * @i: counter
 * Return: 0
 */
int zheprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (zheprime(n, i - 1));
}
