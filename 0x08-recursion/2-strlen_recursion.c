#include "main.h"
/**
 * _strlen_recursion - check length of a string
 * @s: pointer to string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n = n + _strlen_recursion(s + 1);
	}
	return n;
}
