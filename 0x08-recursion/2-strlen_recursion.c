#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: input
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n = _strlen_recursion(n + 1) + n;
	}
	return (n);
}
